
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233a884(undefined8 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte local_44 [4];
  
  if ((*(char *)(param_2 + 0xc205) == '\0') && (**(char **)(param_2 + 0x5fa8) == '\0')) {
    iVar2 = *(int *)(param_2 + 0x5f40);
    if (iVar2 - 2U < 2) {
LAB_0233a914:
      pbVar4 = (byte *)(param_2 + 0x5f44);
LAB_0233a938:
      local_44[0] = *pbVar4;
      if (local_44[0] < 8) goto LAB_0233a954;
      local_44[0] = 0xff;
    }
    else {
      if (iVar2 != 5) {
        if (iVar2 == 1) goto LAB_0233a914;
LAB_0233a930:
        pbVar4 = &DAT_0548e140;
        goto LAB_0233a938;
      }
      local_44[0] = *(byte *)(param_2 + 0x6050);
      if (7 < local_44[0]) goto LAB_0233a930;
LAB_0233a954:
      lVar3 = FUN_02547c90(local_44);
      if (*(char *)(lVar3 + 9) != '\0') goto LAB_0233a8c0;
    }
    pbVar4 = (byte *)FUN_02335d54(param_2);
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = &DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar6 = &DAT_054f0958;
        }
      }
      else {
        puVar6 = &DAT_054f0958;
      }
    }
    else {
      puVar6 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*pbVar4 < 8) {
        puVar6 = puVar6 + *pbVar4;
      }
    }
    if ((*(uint *)((long)puVar6 + 4) >> 0x11 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        if (((((*(uint *)(param_2 + 0x15f4) >> 1 & 1) == 0) ||
             (((DAT_05ab5ea8 != 0 && ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) != 0)) &&
              ((uVar5 = FUN_0253eea0(), (uVar5 & 1) != 0 ||
               ((DAT_05ab5ea8 == 0 || ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 3 & 1) != 0)))))))) ||
            (*(char *)(param_2 + 0xc390) != '\0')) || (uVar5 = FUN_0234c530(), (uVar5 & 1) == 0))
        goto LAB_0233a8c0;
        uVar7 = 0x3661;
      }
      else {
        uVar7 = 0x3238;
      }
    }
    else {
      uVar7 = 0x360b;
    }
    *param_1 = uVar7;
    FUN_0277d4ac(param_1);
  }
  else {
LAB_0233a8c0:
    uVar1 = DAT_0558600c;
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar1;
  }
  return;
}

