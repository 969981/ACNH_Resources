
undefined8 FUN_00144120(long param_1)

{
  char *pcVar1;
  
  if (*(ulong *)(param_1 + 0xa48) < 8) {
    if (((*(ulong *)(param_1 + 0xa50) | 0x10000) == 0x10000) ||
       ((long)*(ulong *)(param_1 + 0xa48) <= (long)*(ulong *)(param_1 + 0xa50) >> 0x10)) {
      return 1;
    }
    pcVar1 = "CURL_SSLVERSION_MAX incompatible with CURL_SSLVERSION";
  }
  else {
    pcVar1 = "Unrecognized parameter value passed via CURLOPT_SSLVERSION";
  }
  FUN_0014d5f8(param_1,pcVar1);
  return 0;
}

