
void FUN_01dc4ef8(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  
  if (*(char *)(param_1 + 0xe8) != '\0') {
    uVar4 = nn::oe::IsUserInactivityDetectionTimeExtended();
    if ((uVar4 & 1) != 0) {
      iVar3 = (**(code **)(*(long *)(param_1 + 0xd0) + (ulong)*(byte *)(param_1 + 0xe4) * 8))
                        ((long *)(param_1 + 0xd0));
      *(int *)(param_1 + 0xd8) = iVar3;
      if (iVar3 != *(int *)(param_1 + 0xe0)) goto LAB_01dc4f4c;
      nn::oe::SetUserInactivityDetectionTimeExtended(false);
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
LAB_01dc4f4c:
  uVar5 = *(uint *)(param_1 + 8);
  if ((uVar5 == 0xffffffff) && (*(char *)(param_1 + 0x20) != '\0')) {
    puVar9 = (undefined1 *)(param_1 + 0x21);
    *puVar9 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 8) = uVar5;
    if (uVar5 == 0xffffffff) {
      *puVar9 = 0;
      goto LAB_01dc5008;
    }
    uVar7 = *(uint *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x30);
    uVar1 = uVar5;
    if (uVar7 <= uVar5) {
      uVar1 = 0;
    }
    puVar8 = *(undefined8 **)(lVar6 + (long)(int)uVar1 * 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)*puVar8)();
      uVar5 = *(uint *)(param_1 + 8);
      goto LAB_01dc4fb8;
    }
    *puVar9 = 0;
  }
  else {
LAB_01dc4fb8:
    *(undefined1 *)(param_1 + 0x21) = 0;
    if (uVar5 == 0xffffffff) goto LAB_01dc5008;
    uVar7 = *(uint *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x30);
  }
  if (uVar7 <= uVar5) {
    uVar5 = 0;
  }
  lVar6 = *(long *)(lVar6 + (long)(int)uVar5 * 0x40);
  if ((lVar6 != 0) && ((**(code **)(lVar6 + 8))(), *(char *)(param_1 + 0x21) != '\0')) {
    return;
  }
LAB_01dc5008:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

