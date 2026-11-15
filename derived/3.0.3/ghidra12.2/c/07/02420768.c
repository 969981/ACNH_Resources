
void FUN_02420768(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auStack_40 [8];
  char *local_38;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 0x1900);
  FUN_0171ed40(&local_14);
  FUN_0171ea90(auStack_40);
  if (*local_38 == '\0') {
    FUN_023164ec(param_1,6);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x1912);
    cVar2 = *(char *)(param_1 + 0x1914);
    cVar3 = *(char *)(param_1 + 0x1913);
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    if (cVar3 == '\0') {
      if (cVar1 == '\0') {
        if (cVar2 == '\0') {
          FUN_017081d0(puVar7,auStack_40,6,0,0);
        }
        else {
          FUN_017029bc();
        }
      }
      else {
        FUN_01707310(puVar7,auStack_40,6,1,0);
        FUN_01707750(puVar7,auStack_40);
      }
    }
    else {
      FUN_01707310(puVar7,auStack_40,6,2,0);
      FUN_01707750(puVar7,auStack_40);
    }
  }
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
    fVar8 = *(float *)(lVar5 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar8 * 999.99994);
    uVar4 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar4;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar7 + 0x2ec) = uVar9;
    *(undefined1 *)((long)puVar7 + 0x2e5) = 1;
  }
  return;
}

