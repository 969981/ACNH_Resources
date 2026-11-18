
bool FUN_0322c818(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_38;
  char *pcStack_30;
  byte local_24 [4];
  
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    return false;
  }
  if (*(long *)(lVar9 + 0x330) == 0) {
LAB_0322c8ec:
    bVar5 = false;
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if (iVar6 != 0x758f7eaf) {
      return false;
    }
    if ((*(char *)(param_1 + 0x30c) != '\0') && (*(uint *)(param_1 + 0x2d8) < 2)) {
      return true;
    }
    local_24[0] = *(byte *)(param_1 + 0x1f8);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    uVar8 = FUN_022040b0(0);
    if ((uVar8 & 1) != 0) {
      local_38 = PTR_DAT_04bb2020 + 0x10;
      pcStack_30 = "AlwJuneBrideQuestStartFlag";
      iVar6 = FUN_0274bce0(local_24,&local_38);
      if (iVar6 != 0) goto LAB_0322c8ec;
    }
    if (*(char *)(param_1 + 0x30e) == '\0') {
      *(undefined1 *)(param_1 + 0x30d) = 0;
      if (*(int *)(param_1 + 0x2e4) == 0) {
        uVar8 = FUN_027a1cb0(local_24);
joined_r0x0322c93c:
        if ((uVar8 & 1) == 0) goto LAB_0322c95c;
LAB_0322c994:
        *(undefined1 *)(param_1 + 0x30d) = 1;
      }
      else {
        if (*(int *)(param_1 + 0x2e4) == 1) {
          uVar8 = FUN_027a2580(local_24,0);
          if ((uVar8 & 1) != 0) goto LAB_0322c994;
        }
        else if (*(int *)(param_1 + 0x2e4) == 2) {
          uVar8 = FUN_033fd070(local_24);
          goto joined_r0x0322c93c;
        }
LAB_0322c95c:
        if (*(char *)(param_1 + 0x30d) == '\0') {
          *(undefined4 *)(param_1 + 0x2e4) = 0xffffffff;
          uVar8 = FUN_027a1cb0(local_24);
          if ((((uVar8 & 1) != 0) || (uVar8 = FUN_027a2580(local_24,0), (uVar8 & 1) != 0)) ||
             (uVar8 = FUN_033fd070(local_24), (uVar8 & 1) != 0)) goto LAB_0322c994;
        }
      }
    }
    bVar4 = *(char *)(param_1 + 0x30c) == '\0' && *(char *)(param_1 + 0x30d) == '\0';
    uVar8 = FUN_03395000(local_24,bVar4);
    puVar3 = PTR_DAT_04bb6298;
    if ((uVar8 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30e) = 0;
      return false;
    }
    *(undefined1 *)(param_1 + 0x30e) = 1;
    sVar2 = *(short *)puVar3;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0xe & 1) != 0) goto LAB_0322c8ec;
    }
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "PlayerMainUImenuEnable";
    iVar6 = FUN_0274bce0(local_24,&local_38);
    bVar5 = iVar6 != 0;
    if (bVar5 && bVar4) {
      bVar5 = *(char *)(param_1 + 0x30f) == '\0';
    }
  }
  return bVar5;
}

