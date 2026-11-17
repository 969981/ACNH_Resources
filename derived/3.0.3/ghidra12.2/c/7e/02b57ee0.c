
/* WARNING: Removing unreachable block (ram,0x02b58134) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

float FUN_02b57ee0(float *param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  float fVar7;
  undefined2 local_58;
  byte local_4c;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  undefined4 local_34;
  
  lVar6 = *(long *)PTR_DAT_04bb27c8;
  if (param_2 == 1) {
    if ((lVar6 != 0) && (lVar4 = *(long *)(lVar6 + 0x90), lVar4 != 0)) {
      if (DAT_04c487d4 == -1) {
        uVar5 = 7;
      }
      else {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar5 = 7;
        if ((*puVar1 & 2) != 0) {
          uVar5 = 5;
        }
      }
LAB_02b58028:
      local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar5);
      local_58 = (ushort)local_58._1_1_ << 8;
      fVar7 = (float)FUN_00962700(lVar4,param_1,&local_48,1,&local_58);
      goto LAB_02b58040;
    }
  }
  else if (((lVar6 != 0) && (lVar4 = *(long *)(lVar6 + 0xa8), lVar4 != 0)) &&
          (*(char *)(lVar6 + 0x11c8) == '\0')) {
    if (DAT_04c487d4 == -1) {
      uVar5 = 7;
    }
    else {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar5 = 7;
      if ((*puVar1 & 2) != 0) {
        uVar5 = 5;
      }
    }
    goto LAB_02b58028;
  }
  fVar7 = -500.0;
LAB_02b58040:
  if (param_2 == 0) {
    lVar6 = *(long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar2 = (long *)(DAT_0519d040 + 0x30) + param_2;
    if (0x38 < param_2) {
      plVar2 = (long *)(DAT_0519d040 + 0x30);
    }
    lVar6 = *plVar2;
  }
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xa8), lVar6 != 0)) {
    local_48 = PTR_DAT_04bb2018 + 0x10;
    local_40 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
    iStack_3c = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
    if ((*(int *)(lVar6 + 0x18) <= local_40 && local_40 <= *(int *)(lVar6 + 0x28)) &&
       ((*(int *)(lVar6 + 0x1c) <= iStack_3c && (iStack_3c <= *(int *)(lVar6 + 0x2c))))) {
      FUN_01309ec4(&local_58,lVar6,&local_48);
      local_34 = 0;
      uVar3 = (uint)local_58 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
      if ((uVar3 < *(uint *)(DAT_0519d040 + 1000)) &&
         (*(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar3 * 8) != 0)) {
        fVar7 = 0.0;
        if (local_4c != 4) {
          fVar7 = (float)local_4c * 15.0;
        }
      }
    }
  }
  return fVar7;
}

