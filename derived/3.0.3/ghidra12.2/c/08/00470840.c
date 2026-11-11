
void FUN_00470840(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined8 *)(*param_1 + (ulong)param_2 * 0x10) = 0xffffffffffffffff;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar4 = *param_1;
  uVar1 = param_2;
  do {
    uVar1 = uVar3 + uVar1 & uVar3;
  } while (*(long *)(lVar4 + (ulong)uVar1 * 0x10) != -1);
  uVar7 = (ulong)(uVar3 & param_2 + 1);
  lVar5 = *(long *)(lVar4 + uVar7 * 0x10);
  if (lVar5 != -1) {
    uVar1 = uVar1 + 1 & uVar3;
    do {
      uVar2 = (int)lVar5 * -0x61c8864f;
      uVar6 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar2 = uVar3 & (uVar2 + (uVar2 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6);
      uVar6 = (uint)uVar7;
      if ((((uVar6 < uVar1) || (uVar2 <= param_2)) &&
          ((param_2 <= uVar6 || (uVar2 <= param_2 && uVar6 < uVar2)))) &&
         (uVar2 <= param_2 || uVar1 <= uVar2)) {
        memcpy((void *)(lVar4 + (ulong)param_2 * 0x10),(void *)(lVar4 + uVar7 * 0x10),0x10);
        *(undefined8 *)(*param_1 + uVar7 * 0x10) = 0xffffffffffffffff;
        uVar3 = *(uint *)((long)param_1 + 0xc);
        lVar4 = *param_1;
        param_2 = uVar6;
      }
      uVar7 = (ulong)(uVar3 & uVar6 + 1);
      lVar5 = *(long *)(lVar4 + uVar7 * 0x10);
    } while (lVar5 != -1);
  }
  return;
}

