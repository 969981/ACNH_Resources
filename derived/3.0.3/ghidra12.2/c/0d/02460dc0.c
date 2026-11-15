
void FUN_02460dc0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  byte bVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined *local_40;
  char *pcStack_38;
  
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f000000;
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
  fVar8 = *pfVar4;
  *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
  cVar1 = *(char *)(param_1 + 0x1918);
  *(float *)(param_1 + 0x1bf0) = fVar8 * 0.5;
  if (*(int *)(param_1 + 0x178) == 0) {
    bVar6 = 0x10;
    if (cVar1 == '\0') {
      bVar6 = 0x20;
    }
    *(byte *)(param_1 + 0x18f8) = *(byte *)(param_1 + 0x18f8) & 0xcf | bVar6;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar7 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  if (((puVar7[0x227] != 0) && (lVar3 = *(long *)(puVar7[0x227] + 0x78), lVar3 != 0)) &&
     (plVar5 = *(long **)(lVar3 + 0x48), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,&DAT_054ce4e8,cVar1 != '\0');
  }
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "PlayerSWalkReady";
  FUN_017029bc(puVar7,&local_40,6,0,0);
  return;
}

