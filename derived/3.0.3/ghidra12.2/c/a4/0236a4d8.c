
void FUN_0236a4d8(long param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_4c;
  int iStack_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar3 = &DAT_05240280;
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar3 + 0x4e8))(plVar3,1);
  if (*(int *)(param_1 + 0x178) == 1) {
    uVar1 = *(ushort *)(param_3 + 0xf);
    local_3c = (float)(int)*(short *)(param_3 + 9) * 0.25;
    local_40 = (float)*(int *)(param_3 + 5) * 0.001;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    local_38 = (float)*(int *)(param_3 + 0xb) * 0.001;
    (**(code **)(*plVar3 + 0x100))(plVar3,&local_40);
    (**(code **)(*plVar3 + 0x128))(plVar3,&local_40);
    (**(code **)(*plVar3 + 0x170))(plVar3);
    *(undefined4 *)(plVar3 + 0x52) = 0;
    *(undefined8 *)((long)plVar3 + 0x2cc) = 0;
    *(undefined8 *)((long)plVar3 + 0x2d4) = 0;
    *(undefined8 *)((long)plVar3 + 0x2dc) = 0;
    if ((plVar3[9] != 0) && (lVar4 = *(long *)(plVar3[9] + 0xa0), lVar4 != 0)) {
      *(undefined1 *)(lVar4 + 0x5090) = 1;
    }
    *(undefined1 *)((long)plVar3 + 0x30c) = 0;
    *(undefined4 *)(plVar3 + 0x67) = 0;
    plVar3[0x65] = 0;
    *(undefined8 *)((long)plVar3 + 0x32d) = 0;
    local_4c = 0;
    local_44 = 0;
    *(float *)((long)plVar3 + 0x304) = local_3c;
    *(float *)((long)plVar3 + 0x314) = local_3c;
    *(float *)(plVar3 + 100) = local_3c;
    *(float *)(plVar3 + 0x60) = local_40;
    *(float *)(plVar3 + 0x61) = local_38;
    *(float *)(plVar3 + 0x62) = local_40;
    *(float *)(plVar3 + 99) = local_38;
    *(float *)((long)plVar3 + 0x31c) = local_40;
    *(float *)((long)plVar3 + 0x324) = local_38;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    iStack_48 = (uint)uVar1 << 0x10;
    (**(code **)(*plVar3 + 0x150))(plVar3,&local_4c);
  }
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      plVar3 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar3 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar3 + 0x4e0))(0x3f800000,plVar3);
  FUN_023203ac(param_1,0,0);
  local_40 = 0.0;
  local_3c = (float)CONCAT31(local_3c._1_3_,1);
  local_38 = 8.40779e-45;
  local_32 = 0;
  local_34 = 0;
  FUN_02321e44(&local_4c,param_1,&local_40);
  return;
}

