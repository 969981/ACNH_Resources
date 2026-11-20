
byte FUN_03f8a29c(long param_1,undefined2 param_2)

{
  switch(param_2) {
  case 0x2300:
    return *(byte *)(param_1 + 0x140be);
  case 0x2301:
    return *(byte *)(param_1 + 0x140bf);
  case 0x2302:
    return *(byte *)(param_1 + 0x140c8);
  case 0x2303:
    return *(byte *)(param_1 + 0x140c9) & 1;
  case 0x2304:
    return *(byte *)(param_1 + 0x140ca);
  case 0x2305:
    return *(byte *)(param_1 + 0x140cb) & 1;
  case 0x2306:
    return *(byte *)(param_1 + 0x14100);
  case 0x2307:
    return *(byte *)(param_1 + 0x14101);
  case 0x2308:
    return *(byte *)(param_1 + 0x14102);
  case 0x2309:
    return *(byte *)(param_1 + 0x14103);
  case 0x230a:
    return *(byte *)(param_1 + 0x14104);
  case 0x230b:
    return *(byte *)(param_1 + 0x14108) & 0x80;
  case 0x230c:
  case 0x230d:
    return *(byte *)(param_1 + 0x14111);
  case 0x230e:
    goto switchD_03f8a2cc_caseD_230e;
  default:
    switch(param_2) {
    case 0x2203:
      return *(byte *)(param_1 + 0x140b6);
    case 0x2204:
      return *(byte *)(param_1 + 0x140b7);
    case 0x2205:
      return *(byte *)(param_1 + 0x140b8);
    case 0x2206:
      return *(byte *)(param_1 + 0x140b9);
    case 0x2207:
      return *(byte *)(param_1 + 0x140ba);
    case 0x2208:
      return *(byte *)(param_1 + 0x140bb);
    }
switchD_03f8a2cc_caseD_230e:
    **(int **)(param_1 + 0x14078) = **(int **)(param_1 + 0x14078) + 1;
    return *(byte *)(param_1 + 0xc);
  }
}

