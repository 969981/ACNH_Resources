
void FUN_02476e20(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined1 *)(param_1 + 0x945) = 0;
  cVar1 = *(char *)(param_1 + 0x190b);
  *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_1 + 0x93c);
  if (*(int *)(param_1 + 0x1810) == 7) {
    FUN_0231b104(param_1,6);
  }
  if (cVar1 == '\0') {
    FUN_02472404(0x3f800000,param_1);
    iVar6 = FUN_016f5c40(param_1);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
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
    if (iVar6 == 0xc) {
      pcStack_38 = "CommonUmbrellaPutaway";
    }
    else {
      pcStack_38 = "CommonToolPutaway";
    }
  }
  else {
    if (*(int *)(param_1 + 0x1810) == 4) {
      FUN_023164ec(param_1,6);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      if (puVar3 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar6 != 0) {
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
      FUN_01702b70(puVar3,6,3);
      FUN_0244b6a0(param_1,0,1);
      *(undefined4 *)(param_1 + 0x940) = 6;
      *(undefined8 *)(param_1 + 0x938) = 0;
      *(undefined2 *)(param_1 + 0x944) = 0x100;
      goto LAB_02476f8c;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        if (iVar6 != 0) {
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
    pcStack_38 = "CommonSmartPhonePutaway";
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar3,&local_40,6,0,0);
LAB_02476f8c:
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar4 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar5 + 0x278) * 999.99994);
    iVar6 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar6;
    fVar7 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar7 * 999.99994);
    uVar4 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar4;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar8 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar8;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xff7fffff;
  return;
}

