
void FUN_0364ee88(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  
  uVar5 = param_2 >> 0xc & 0xf;
  uVar4 = uVar5 - 0xb;
  if (uVar4 < 4) {
    uVar3 = uVar4 >> 1;
    uVar4 = uVar4 & 1;
    param_3 = param_3 & 0x1f;
    puVar8 = (uint *)((long)param_1 + (ulong)uVar3 * 0x14 + 8);
    uVar2 = *puVar8;
    uVar5 = puVar8[(ulong)uVar4 + 1];
    puVar8[(ulong)uVar4 + 1] = param_3;
    if (uVar2 == uVar4 && uVar5 != param_3) {
      lVar1 = *param_1 + 0x2a8;
      lVar7 = lVar1 + (ulong)(uVar3 << 2) * 0x10;
      FUN_03653cb0(lVar1,uVar3 << 0xc,*(undefined8 *)(lVar7 + 0x18),0x1000,
                   *(int *)(lVar1 + (ulong)(uVar3 << 2) * 4 + 0x410) - 1U & param_3 << 0xc,
                   *(char *)(lVar7 + 0x10) == '\0');
      *(uint *)((long)param_1 + (ulong)uVar3 * 0x14 + 0x14) = param_3;
    }
  }
  else {
    if (uVar5 == 0xf) {
      if ((param_3 & 1) == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = 3;
      }
      FUN_03657d08(*param_1,uVar6);
      return;
    }
    if (uVar5 == 10) {
      lVar7 = *param_1;
      FUN_03653cb0(lVar7 + 0x2a8,0x8000,*(undefined8 *)(lVar7 + 0x4c0),
                   *(int *)((long)param_1 + 0x34),
                   *(int *)(lVar7 + 0x738) - 1U & *(int *)((long)param_1 + 0x34) * (param_3 & 0xf),
                   *(char *)(lVar7 + 0x4b8) == '\0');
      return;
    }
  }
  return;
}

