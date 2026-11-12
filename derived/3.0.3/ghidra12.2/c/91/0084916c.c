
void FUN_0084916c(long param_1)

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
      FUN_0384f8c0(lVar4,&DAT_04cdb978,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb978,0,0);
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
        *(uint *)(param_1 + 0x2b8) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04cdb988,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb988,0,0);
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
        *(uint *)(param_1 + 700) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      uVar1 = FUN_03850a90(plVar3[0x227],3,&local_50,0);
      if ((uVar1 & 1) != 0) {
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
        *(uint *)(param_1 + 0x2c0) = uVar2;
      }
      if (plVar3[0x227] != 0) {
        FUN_038501b0(0,plVar3[0x227],0);
        lVar4 = plVar3[0x227];
        if (*(char *)(lVar4 + 0x2c0) != '\0') {
          *(undefined1 *)(lVar4 + 0x2c0) = 0;
          FUN_03855b20(lVar4 + 0xc0,0);
        }
        FUN_0384f8c0(lVar4,&DAT_04cdb998,0,0);
        (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb998,0,0);
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
          *(uint *)(param_1 + 0x2c4) = uVar2;
        }
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04cdb9a8,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb9a8,0,0);
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
        *(uint *)(param_1 + 0x2c8) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04cdb9b8,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb9b8,0,0);
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
        *(uint *)(param_1 + 0x2cc) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04cdb9c8,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb9c8,0,0);
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
        *(uint *)(param_1 + 0x2d0) = uVar2;
      }
    }
    if (plVar3[0x227] != 0) {
      FUN_038501b0(0,plVar3[0x227],0);
      lVar4 = plVar3[0x227];
      if (*(char *)(lVar4 + 0x2c0) != '\0') {
        *(undefined1 *)(lVar4 + 0x2c0) = 0;
        FUN_03855b20(lVar4 + 0xc0,0);
      }
      FUN_0384f8c0(lVar4,&DAT_04cdb9d8,0,0);
      (**(code **)(*plVar3 + 0x120))(plVar3,&DAT_04cdb9d8,0,0);
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
        *(uint *)(param_1 + 0x2d4) = uVar2;
      }
    }
  }
  return;
}

