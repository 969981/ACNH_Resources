
void FUN_039b6c20(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_68;
  char *local_60;
  undefined4 local_58;
  char local_54 [15];
  undefined1 local_45;
  
  local_45 = 0;
  local_58 = 0x10;
  local_54[0] = '\0';
  local_60 = local_54;
  local_68 = PTR_DAT_04bb2ab0 + 0x10;
  FUN_038b6c10(&local_68);
  FUN_038b6f50(param_1,param_2);
  (**(code **)(*param_1 + 0x18))(param_1);
  uVar6 = 0;
  do {
    if (*(char *)(param_1[1] + uVar6) == '\0') goto LAB_039b6cdc;
    lVar8 = param_1[1] + uVar6;
    if (*(char *)(lVar8 + 1) == '\0') {
      uVar6 = uVar6 + 1;
      goto LAB_039b6cdc;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      uVar6 = uVar6 + 2;
      goto LAB_039b6cdc;
    }
    uVar6 = uVar6 + 3;
  } while (uVar6 != 0x80001);
  uVar6 = 0;
LAB_039b6cdc:
  (**(code **)(local_68 + 0x18))(&local_68);
  lVar8 = 0;
  do {
    iVar3 = (int)uVar6;
    if (local_60[lVar8] == '\0') {
LAB_039b6d30:
      uVar7 = (uint)lVar8;
joined_r0x039b6d34:
      bVar2 = (int)uVar7 <= iVar3;
      iVar3 = iVar3 - uVar7;
      if (bVar2) goto LAB_039b6d48;
      goto LAB_039b6db8;
    }
    if (local_60[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_039b6d30;
    }
    if (local_60[lVar8 + 2] == '\0') {
      uVar7 = (int)lVar8 + 2;
      goto joined_r0x039b6d34;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  uVar7 = 0;
  if (-1 < iVar3) {
LAB_039b6d48:
    lVar8 = param_1[1];
    (**(code **)(local_68 + 0x18))(&local_68);
    if ((0 < (int)uVar7) && ((char *)(lVar8 + iVar3) != local_60)) {
      if (0x7ffff < (int)uVar7) {
        uVar7 = 0x80000;
      }
      lVar5 = -(ulong)uVar7;
      pcVar4 = local_60;
      do {
        cVar1 = *(char *)(lVar8 + (uVar6 & 0xffffffff) + lVar5);
        if (cVar1 != *pcVar4) goto LAB_039b6db8;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
      } while ((cVar1 != '\0') && (pcVar4 = pcVar4 + 1, bVar2));
    }
    *(undefined1 *)(param_1[1] + (long)iVar3) = 0;
  }
LAB_039b6db8:
  (**(code **)(local_68 + 0x18))(&local_68);
  FUN_038d13f0(param_1,&DAT_040b2ddc,local_60);
  return;
}

