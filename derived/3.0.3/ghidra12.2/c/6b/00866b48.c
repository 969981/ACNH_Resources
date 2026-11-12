
void FUN_00866b48(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 != (long *)0x0) {
    local_40 = 0;
    local_38 = (long *)0x0;
    local_50 = 0;
    uStack_48 = 0;
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04ce4d70,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04ce4d70,0,0);
      if ((plVar3[0x227] != 0) &&
         (uVar1 = FUN_03850a90(plVar3[0x227],4,&local_50,0), (uVar1 & 1) != 0)) {
        if ((local_38 == (long *)0x0) || (lVar4 = *local_38, lVar4 == 0)) {
          uVar2 = 1;
        }
        else {
          fVar5 = *(float *)(lVar4 + 0x18);
          if (fVar5 < 0.0) {
            fVar5 = *(float *)(local_38[1] + 0xc);
          }
          uVar2 = (uint)(fVar5 - *(float *)(lVar4 + 0x14));
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        *(uint *)(param_1 + 0x2a4) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04ce4d90,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04ce4d90,0,0);
      if ((plVar3[0x227] != 0) &&
         (uVar1 = FUN_03850a90(plVar3[0x227],4,&local_50,0), (uVar1 & 1) != 0)) {
        if ((local_38 == (long *)0x0) || (lVar4 = *local_38, lVar4 == 0)) {
          uVar2 = 1;
        }
        else {
          fVar5 = *(float *)(lVar4 + 0x18);
          if (fVar5 < 0.0) {
            fVar5 = *(float *)(local_38[1] + 0xc);
          }
          uVar2 = (uint)(fVar5 - *(float *)(lVar4 + 0x14));
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        *(uint *)(param_1 + 0x2a8) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04ce4da0,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04ce4da0,0,0);
      if ((plVar3[0x227] != 0) &&
         (uVar1 = FUN_03850a90(plVar3[0x227],4,&local_50,0), (uVar1 & 1) != 0)) {
        if ((local_38 == (long *)0x0) || (lVar4 = *local_38, lVar4 == 0)) {
          uVar2 = 1;
        }
        else {
          fVar5 = *(float *)(lVar4 + 0x18);
          if (fVar5 < 0.0) {
            fVar5 = *(float *)(local_38[1] + 0xc);
          }
          uVar2 = (uint)(fVar5 - *(float *)(lVar4 + 0x14));
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        *(uint *)(param_1 + 0x2ac) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04ce4db0,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04ce4db0,0,0);
      if ((plVar3[0x227] != 0) &&
         (uVar1 = FUN_03850a90(plVar3[0x227],4,&local_50,0), (uVar1 & 1) != 0)) {
        if ((local_38 == (long *)0x0) || (lVar4 = *local_38, lVar4 == 0)) {
          uVar2 = 1;
        }
        else {
          fVar5 = *(float *)(lVar4 + 0x18);
          if (fVar5 < 0.0) {
            fVar5 = *(float *)(local_38[1] + 0xc);
          }
          uVar2 = (uint)(fVar5 - *(float *)(lVar4 + 0x14));
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        *(uint *)(param_1 + 0x2b0) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04ce4dc0,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04ce4dc0,0,0);
      if ((plVar3[0x227] != 0) &&
         (uVar1 = FUN_03850a90(plVar3[0x227],4,&local_50,0), (uVar1 & 1) != 0)) {
        if ((local_38 == (long *)0x0) || (lVar4 = *local_38, lVar4 == 0)) {
          uVar2 = 1;
        }
        else {
          fVar5 = *(float *)(lVar4 + 0x18);
          if (fVar5 < 0.0) {
            fVar5 = *(float *)(local_38[1] + 0xc);
          }
          uVar2 = (uint)(fVar5 - *(float *)(lVar4 + 0x14));
          if (uVar2 < 2) {
            uVar2 = 1;
          }
        }
        *(uint *)(param_1 + 0x2b4) = uVar2;
      }
    }
  }
  return;
}

