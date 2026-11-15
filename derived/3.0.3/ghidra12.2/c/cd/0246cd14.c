
/* WARNING: Removing unreachable block (ram,0x0246ce04) */

void FUN_0246cd14(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined1 *)(param_1 + 0x58d) = 0;
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x584);
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    uVar5 = 6;
    if (*(char *)(param_1 + 0x1900) != '\0') {
      uVar5 = (uint)*(byte *)(param_1 + 0x1901);
    }
    *(undefined8 *)(param_1 + 0x580) = 0;
    *(undefined2 *)(param_1 + 0x58c) = 0x100;
    *(uint *)(param_1 + 0x588) = uVar5;
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
        puVar3 = &DAT_05240280;
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "CommonDiveWait";
    FUN_017081d0(puVar3,&local_50,uVar5,1,0);
  }
  fVar7 = -20.0;
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar9 = *(float *)((long)puVar3 + 0x27c);
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar6 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar6 != 0)) {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    lVar6 = *(long *)(lVar6 + 0x118);
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x280);
      fVar7 = 0.0;
      if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 8), lVar6 != 0)) {
        pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x488) + 0xf0))(lVar6 + 0x488);
        fVar7 = *pfVar4;
      }
      lVar6 = FUN_0251e98c(1);
      pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x1590) + 0xf0))(lVar6 + 0x1590);
      fVar7 = fVar7 + *pfVar4;
    }
  }
  if (fVar7 <= fVar9) {
    if (fVar9 <= fVar7) goto LAB_0246ce94;
    fVar8 = fVar9 + -0.5;
    bVar1 = true;
    if ((fVar7 < fVar8) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar8))) {
      bVar1 = fVar9 < fVar8;
    }
  }
  else {
    fVar8 = fVar9 + 0.5;
    bVar1 = true;
    if ((fVar8 < fVar7) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar9))) {
      bVar1 = fVar8 < fVar9;
    }
  }
  fVar9 = fVar7;
  if (!bVar1) {
    fVar9 = fVar8;
  }
LAB_0246ce94:
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar3 + 0x27c) = fVar9;
  return;
}

