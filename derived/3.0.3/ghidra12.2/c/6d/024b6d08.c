
void FUN_024b6d08(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  float fVar9;
  undefined *local_40;
  char *pcStack_38;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  puVar8 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CommonRodFight";
  FUN_017081d0(puVar3,&local_40,6,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar1);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
      puVar8 = PTR_DAT_04bb2020;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar4 = FUN_017067d4(puVar3,uVar1,0);
  if (lVar4 != 0) {
    local_40 = puVar8 + 0x10;
    pcStack_38 = "ToolRodFight";
    FUN_01751d60(lVar4,&local_40,6,0,0);
  }
  uVar1 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar1,7);
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024b6f1c;
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  lVar4 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  bVar7 = *(byte *)(lVar4 + 0x44);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (bVar6 == bVar7) {
    lVar5 = 0;
LAB_024b6ee8:
    lVar4 = lVar4 + 0x40 + lVar5 * 0x20;
  }
  else {
    bVar7 = *(byte *)(lVar4 + 100);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 1;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0x84);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 2;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0xa4);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 3;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0xc4);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 4;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0xe4);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 5;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0x104);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 6;
      goto LAB_024b6ee8;
    }
    bVar7 = *(byte *)(lVar4 + 0x124);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 7;
      goto LAB_024b6ee8;
    }
    lVar4 = lVar4 + 0x140;
  }
  fVar9 = *(float *)(lVar4 + 0x10);
  *(float *)(param_1 + 0xac8) = fVar9;
  *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(lVar4 + 0x14);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(lVar4 + 0x18);
  *(bool *)(param_1 + 0x1920) = fVar9 < *(float *)(*(long *)(param_1 + 0x68) + 0x278);
LAB_024b6f1c:
  FUN_0232ba00(param_1);
  return;
}

