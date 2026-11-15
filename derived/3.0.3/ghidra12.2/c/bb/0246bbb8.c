
/* WARNING: Removing unreachable block (ram,0x0246bcb0) */
/* WARNING: Removing unreachable block (ram,0x0246bd40) */

void FUN_0246bbb8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  long lVar7;
  uint *puVar8;
  float fVar9;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  local_34 = (uint)*(byte *)(param_1 + 0x1900);
  if (3 < local_34) {
    local_34 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if (local_34 < 4) {
      iVar6 = (int)*(float *)(&DAT_041026f0 + (long)(int)local_34 * 4);
    }
    else {
      iVar6 = 6;
    }
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960,param_2,iVar6);
        puVar8 = (uint *)&DAT_054f0958;
        param_2 = extraout_x1;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          param_2 = extraout_x1_00;
        }
      }
      else {
        puVar8 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar8 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar8 = puVar8 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    if ((*puVar8 >> 0x19 & 1) == 0) {
      pcStack_40 = "PlayerSwimStride_FlapFoot";
      if (*(uint *)(param_1 + 0x13d8) < 0x1f) {
        pcStack_40 = "PlayerSwimStride";
      }
    }
    else {
      pcStack_40 = "PlayerSwimStride";
    }
    puVar4 = *(undefined8 **)(param_1 + 0x60);
    local_48 = PTR_DAT_04bb2020 + 0x10;
    if (puVar4 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0,param_2,iVar6);
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar4 = &DAT_05240280;
      }
      else {
        puVar4 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar4,&local_48,iVar6,0,1);
  }
  fVar9 = -20.0;
  puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar7 != 0)) {
    local_48 = (undefined *)((ulong)local_48 & 0xffffffff00000000);
    lVar7 = *(long *)(lVar7 + 0x118);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x280);
      fVar9 = 0.0;
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 8), lVar7 != 0)) {
        pfVar5 = (float *)(**(code **)(*(long *)(lVar7 + 0x488) + 0xf0))(lVar7 + 0x488);
        fVar9 = *pfVar5;
      }
      lVar7 = FUN_0251e98c(1);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar7 + 0x1560) + 0xf0))(lVar7 + 0x1560);
      fVar9 = fVar9 + *pfVar5;
    }
  }
  puVar2 = &DAT_054e9a58;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  *(float *)((long)puVar2 + 0x27c) = fVar9;
  uVar1 = *(int *)(param_1 + 0x690) + 1;
  *(uint *)(param_1 + 0x690) = uVar1;
  lVar7 = param_1 + (ulong)(uVar1 & 1) * 0xc;
  puVar4 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(undefined4 *)(lVar7 + 0x678) = *(undefined4 *)(puVar4 + 0x4f);
  *(undefined4 *)(lVar7 + 0x67c) = *(undefined4 *)((long)puVar4 + 0x27c);
  *(undefined4 *)(lVar7 + 0x680) = *(undefined4 *)(puVar4 + 0x50);
  return;
}

