
void FUN_004a15e0(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *local_48 [2];
  ulong local_38;
  
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 6) == '\0') {
    FUN_0044ed80(local_48,*(undefined8 *)param_1[1],PTR_DAT_04bd7300);
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
    if (local_48[0] != (undefined8 *)0x0) {
      (*(code *)*local_48[0])(*(undefined8 *)param_1[2],*(undefined8 *)param_1[1],lVar7 + 8);
      return;
    }
  }
  if (((*(byte *)(*(long *)param_1[1] + 2) >> 4 & 1) == 0) ||
     (puVar2 = (uint *)FUN_00426db0(*(long *)param_1[1],0x100000), puVar2 == (uint *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar2;
  }
  uVar1 = uVar8 & 0xf0000000;
  if (((**(byte **)param_1[2] & 1) == 0) ||
     (puVar2 = (uint *)FUN_00426db0(*(byte **)param_1[2],1), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
    uVar6 = 0;
    if (*(char *)(lVar7 + 6) == '\0') goto LAB_004a1660;
LAB_004a16d4:
    uVar4 = (ulong)uVar1;
    switch(uVar6) {
    case 2:
      uVar4 = (ulong)(uVar1 | 0x10001);
      break;
    case 3:
    case 6:
      uVar4 = (ulong)(uVar1 | 0x40004);
      break;
    case 4:
    case 5:
switchD_004a1698_caseD_2:
      uVar4 = (ulong)uVar8;
      break;
    case 8:
      uVar8 = uVar1 | 0x40004;
      if (0xff < uVar5) {
        uVar8 = uVar1;
      }
      uVar4 = (ulong)uVar8;
    }
  }
  else {
    uVar5 = *puVar2;
    uVar6 = uVar5 & 0x1f;
    if (*(char *)(lVar7 + 6) != '\0') goto LAB_004a16d4;
LAB_004a1660:
    uVar4 = (ulong)uVar1;
    if ((*(long *)(*(long *)param_1[2] + 8) != 0) || (*(char *)(*(long *)param_1[2] + 2) < '\0'))
    goto switchD_004a1698_default;
    switch(uVar6) {
    case 2:
    case 4:
    case 5:
      goto switchD_004a1698_caseD_2;
    case 3:
      if ((0xffff < uVar5) && (uVar4 = (ulong)uVar8, (uVar5 >> 5 & 1) != 0)) break;
    case 6:
      uVar4 = (ulong)(*(ushort *)(lVar7 + 8) | uVar1 | (*(ushort *)(lVar7 + 8) & 0xfff) << 0x10);
      break;
    default:
      break;
    }
  }
switchD_004a1698_default:
  puVar3 = (ulong *)FUN_00426d40(*(undefined8 *)param_1[2],0x100000);
  *puVar3 = uVar4;
  return;
}

