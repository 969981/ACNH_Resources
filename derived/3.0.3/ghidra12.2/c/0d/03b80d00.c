
undefined8 FUN_03b80d00(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  short *psVar8;
  int local_28;
  char local_24;
  
  if (*param_1 == 0) {
    return 0;
  }
  local_28 = 0;
  local_24 = '\0';
  uVar7 = FUN_03b36b40(param_1,&local_28,"TypeName");
  if (((uVar7 & 1) != 0) && (local_24 == -0x60)) {
    psVar8 = (short *)*param_1;
    uVar2 = *(uint *)(psVar8 + 4);
    uVar5 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    if (*psVar8 != 0x5942) {
      uVar5 = uVar2;
    }
    if (uVar5 != 0) {
      uVar3 = *(uint *)((long)psVar8 + (long)local_28 * 4 + (long)(int)uVar5 + 4);
      uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if (*psVar8 != 0x5942) {
        uVar2 = uVar3;
      }
      lVar1 = (long)psVar8 + (ulong)uVar2 + (long)(int)uVar5;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      if (param_2[1] == lVar1) {
        return 1;
      }
      uVar7 = 0;
      bVar6 = true;
      do {
        cVar4 = *(char *)(param_2[1] + uVar7);
        if (cVar4 != *(char *)(lVar1 + uVar7)) {
          return 0;
        }
        if (cVar4 == '\0') {
          if (bVar6) {
            return 1;
          }
          return 0;
        }
        bVar6 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
    }
  }
  return 0;
}

