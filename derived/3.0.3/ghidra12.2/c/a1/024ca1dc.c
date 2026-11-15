
void FUN_024ca1dc(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_50;
  char *local_48;
  
  iVar3 = *(int *)(param_1 + 0x178);
  if (iVar3 == 1) {
    puVar7 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_50 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                        (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar7 + 0x4f,&local_50);
    if (*(int *)(param_1 + 0x178) != 0) {
LAB_024ca2f4:
      iVar3 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar2 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar2 = *(long **)(param_1 + 0x4c8);
      }
      lVar4 = (**(code **)(*plVar2 + 0x148))();
      iVar6 = iVar3 - *(int *)(lVar4 + 4);
      if (0xb60b5e < iVar6 + 0x5b05afU) {
        iVar5 = (int)((float)iVar6 * 0.1666667);
        iVar6 = 0x10000000;
        if (iVar5 < 1) {
          iVar6 = -0x5b05b0;
        }
        iVar3 = -0x10000000;
        if (0 < iVar5) {
          iVar3 = 0x5b05b0;
        }
        iVar1 = iVar5;
        if (iVar6 <= iVar5) {
          iVar1 = iVar6;
        }
        if (iVar3 <= iVar5) {
          iVar3 = iVar1;
        }
        iVar3 = iVar3 + *(int *)(lVar4 + 4);
      }
      *(int *)(lVar4 + 4) = iVar3;
      iVar3 = *(int *)(param_1 + 0x178);
      goto LAB_024ca374;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_024ca2f4;
LAB_024ca378:
    local_50 = (undefined *)CONCAT44(local_50._4_4_,10);
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024ca450;
  }
  else {
LAB_024ca374:
    if (iVar3 == 0) goto LAB_024ca378;
  }
  plVar2 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x4c8);
  }
  lVar4 = (**(code **)(*plVar2 + 0x148))();
  iVar3 = *(int *)(param_1 + 0xc28);
  iVar6 = iVar3 - *(int *)(lVar4 + 4);
  if (0xb60b5e < iVar6 + 0x5b05afU) {
    iVar5 = 0x15555560;
    iVar3 = -0x15555560;
    iVar6 = (int)((float)iVar6 * 0.4);
    if (iVar6 < 1) {
      iVar5 = -0x5b05b0;
    }
    else {
      iVar3 = 0x5b05b0;
    }
    iVar1 = iVar6;
    if (iVar5 <= iVar6) {
      iVar1 = iVar5;
    }
    if (iVar3 <= iVar6) {
      iVar3 = iVar1;
    }
    iVar3 = iVar3 + *(int *)(lVar4 + 4);
  }
  *(int *)(lVar4 + 4) = iVar3;
LAB_024ca450:
  if (*(uint *)(param_1 + 0x1c04) == 5) {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    if (puVar7 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar7 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar7 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "MaReSurprised";
    FUN_017081d0(puVar7,&local_50,6,1,0);
  }
  else if (0x22 < *(uint *)(param_1 + 0x1c04)) {
    FUN_02373ee0(param_1,6,1,1);
  }
  return;
}

