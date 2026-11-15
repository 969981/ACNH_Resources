
/* WARNING: Removing unreachable block (ram,0x0207b100) */
/* WARNING: Removing unreachable block (ram,0x0207b128) */
/* WARNING: Removing unreachable block (ram,0x0207b108) */
/* WARNING: Removing unreachable block (ram,0x0207b110) */

uint FUN_0207af40(long *param_1,float *param_2,float *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined *local_70;
  long lStack_68;
  long *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined1 local_38;
  undefined4 local_18;
  uint local_14;
  
  if (((param_5 & 1) == 0) || (uVar3 = FUN_0207a9c0(param_1,param_2,param_3), (uVar3 & 1) != 0)) {
    fVar5 = *param_3;
    local_14 = (int)((float)(int)(*param_2 + 2.5) / 5.0) - (uint)(*param_2 + 2.5 < 0.0) & 0xffff |
               ((int)((float)(int)(param_2[2] + 2.5) / 5.0) - (uint)(param_2[2] + 2.5 < 0.0)) *
               0x10000;
    if (*(char *)((long)param_1 + 0x1d1) == '\0') {
      local_18 = (int)((float)(int)(fVar5 + 2.5) / 5.0) - (uint)(fVar5 + 2.5 < 0.0) & 0xffff |
                 ((int)((float)(int)(param_3[2] + 2.5) / 5.0) - (uint)(param_3[2] + 2.5 < 0.0)) *
                 0x10000;
    }
    else {
      local_18 = CONCAT22((short)(int)((float)(int)param_3[2] / 5.0) - (ushort)(param_3[2] < 0.0),
                          (short)(int)((float)(int)fVar5 / 5.0) - (ushort)(fVar5 < 0.0));
    }
    local_60 = (long *)0x0;
    local_58 = 0;
    lStack_68 = param_1[2];
    local_50 = 0;
    local_48 = 0;
    local_70 = PTR_DAT_04bc2170 + 0x10;
    local_40 = 0;
    local_38 = *(undefined1 *)(*(long *)(*param_1 + 0x3b8) + 0x56e8);
    if ((char)param_1[0x2e] == '\0') {
      if (*(char *)((long)param_1 + 0x171) != '\0') {
        lVar4 = 0;
        goto LAB_0207b0d8;
      }
    }
    else {
      local_60 = param_1 + 0x15;
      if (*(char *)((long)param_1 + 0x171) != '\0') {
        lVar4 = 1;
LAB_0207b0d8:
        (&local_60)[lVar4] = param_1 + 0x1a;
      }
    }
    if (*(char *)((long)param_1 + 0x172) != '\0') {
      lVar4 = 0;
      if (local_60 != (long *)0x0) {
        if (local_58 == 0) {
          lVar4 = 1;
        }
        else {
          lVar4 = 2;
        }
      }
      (&local_60)[lVar4] = param_1 + 0x1f;
    }
    if (*(char *)((long)param_1 + 0x173) != '\0') {
      lVar4 = 0;
      if (local_60 != (long *)0x0) {
        if (local_58 == 0) {
          lVar4 = 1;
        }
        else if (local_50 == 0) {
          lVar4 = 2;
        }
        else if (local_48 == 0) {
          lVar4 = 3;
        }
        else {
          if (local_40 != 0) goto LAB_0207b188;
          lVar4 = 4;
        }
      }
      (&local_60)[lVar4] = param_1 + 0x24;
    }
LAB_0207b188:
    if (*(char *)((long)param_1 + 0x174) != '\0') {
      lVar4 = 0;
      if (local_60 != (long *)0x0) {
        if (local_58 == 0) {
          lVar4 = 1;
        }
        else if (local_50 == 0) {
          lVar4 = 2;
        }
        else if (local_48 == 0) {
          lVar4 = 3;
        }
        else {
          if (local_40 != 0) goto LAB_0207b1dc;
          lVar4 = 4;
        }
      }
      (&local_60)[lVar4] = param_1 + 0x29;
    }
LAB_0207b1dc:
    iVar1 = FUN_035a6520(lStack_68,local_14,local_18,&local_70);
    if ((iVar1 == 2) && (lVar4 = *(long *)(param_1[2] + 0x38), lVar4 != 0)) {
      iVar1 = 1;
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        iVar1 = iVar1 + -1;
      } while (lVar4 != 0);
      if (iVar1 != 0) {
        uVar2 = FUN_0207b3a0(param_1,&local_14,&local_18,param_2);
        goto LAB_0207b22c;
      }
    }
  }
  uVar2 = 0;
LAB_0207b22c:
  return uVar2 & 1;
}

