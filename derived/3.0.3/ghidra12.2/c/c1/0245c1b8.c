
void FUN_0245c1b8(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  undefined1 auStack_3c [4];
  float local_38;
  
  if (*(int *)(param_1 + 0x1810) == 7) {
    bVar1 = *(byte *)(param_1 + 0x18f8) >> 4 & 3;
    if (bVar1 == 2) {
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
      FUN_016ff8c0(puVar3,0xb,auStack_3c);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      fVar5 = local_38 - *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
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
      FUN_016ff740(puVar3,0,&local_78);
      fVar4 = -13.0;
    }
    else {
      if (bVar1 != 1) {
        return;
      }
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
      FUN_016ff8c0(puVar3,0xb,auStack_3c);
      puVar3 = *(undefined8 **)(param_1 + 0x60);
      fVar5 = local_38 - *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
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
      FUN_016ff740(puVar3,0,&local_78);
      fVar4 = 13.0;
    }
    local_48 = fStack_6c + fVar5 * fStack_74 + fVar4 * local_78 + local_70 * 2.0;
    fStack_44 = fStack_5c + fVar5 * fStack_64 + fVar4 * local_68 + local_60 * 2.0;
    local_40 = fStack_4c + fVar5 * fStack_54 + fVar4 * local_58 + local_50 * 2.0;
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_01730cb4(*(long *)(param_1 + 0x60) + 0x12c0,&local_48);
    }
  }
  return;
}

