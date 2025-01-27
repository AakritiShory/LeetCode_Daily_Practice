class Solution {
    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

        // Map to store character frequencies
        HashMap<Character, Integer> map = new HashMap<>();

        // Count frequencies in string s
        for (int i = 0; i < s.length(); i++) {
            char key = s.charAt(i);
            map.put(key, map.getOrDefault(key, 0) + 1);
        }

        // Adjust frequencies based on string t
        for (int i = 0; i < t.length(); i++) {
            char key = t.charAt(i);
            if (!map.containsKey(key)) {
                return false; // Character in t not in s
            }
            map.put(key, map.get(key) - 1);
            if (map.get(key) == 0) {
                map.remove(key); // Remove key when count is zero
            }
        }

        // Map should be empty if the strings are anagrams
        return map.isEmpty();
    }
}