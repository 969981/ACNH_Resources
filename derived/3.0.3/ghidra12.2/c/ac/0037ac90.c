
void FUN_0037ac90(undefined8 param_1,long param_2,long param_3,ushort param_4)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar4 = 0;
    do {
      puVar1 = (uint *)(param_3 + lVar4);
      uVar5 = (ulong)*puVar1;
      pcVar2 = (char *)0x0;
      if (*puVar1 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec2_0",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x134) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec2_1",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec2_2",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec2_3",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec3_0",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec3_1",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x184) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec3_2",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 400) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Vec3_3",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        *(undefined4 *)(param_2 + 0x1a4) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 4);
        *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1] + 8);
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Rgba_0",pcVar2);
      if (iVar3 == 0) {
        *(float *)(param_2 + 0x1b0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1b4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1b8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1bc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ;
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Rgba_1",pcVar2);
      if (iVar3 == 0) {
        *(float *)(param_2 + 0x1c0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1c4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1c8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1cc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ;
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Rgba_2",pcVar2);
      if (iVar3 == 0) {
        *(float *)(param_2 + 0x1d0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1d4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1d8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1dc) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ;
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Rgba_3",pcVar2);
      if (iVar3 == 0) {
        *(float *)(param_2 + 0x1e0) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1]) / 255.0;
        *(float *)(param_2 + 0x1e4) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 4) / 255.0;
        *(float *)(param_2 + 0x1e8) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 8) / 255.0;
        *(float *)(param_2 + 0x1ec) = (float)*(int *)((long)puVar1 + (ulong)puVar1[1] + 0xc) / 255.0
        ;
        uVar5 = (ulong)*puVar1;
      }
      pcVar2 = (char *)0x0;
      if ((int)uVar5 != 0) {
        pcVar2 = (char *)((long)puVar1 + uVar5);
      }
      iVar3 = strcmp("__CUS_Float_0",pcVar2);
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        uVar5 = (ulong)*puVar1;
        pcVar2 = (char *)0x0;
        if (*puVar1 != 0) {
          pcVar2 = (char *)((long)puVar1 + uVar5);
        }
        iVar3 = strcmp("__CUS_Float_1",pcVar2);
        if (iVar3 == 0) goto LAB_0037b1b8;
LAB_0037b158:
        pcVar2 = (char *)0x0;
        if ((int)uVar5 != 0) {
          pcVar2 = (char *)((long)puVar1 + uVar5);
        }
        iVar3 = strcmp("__CUS_Float_2",pcVar2);
        if (iVar3 != 0) goto LAB_0037b170;
LAB_0037b1e0:
        *(undefined4 *)(param_2 + 0x128) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        pcVar2 = (char *)0x0;
        if (*puVar1 != 0) {
          pcVar2 = (char *)((long)puVar1 + (ulong)*puVar1);
        }
        iVar3 = strcmp("__CUS_Float_3",pcVar2);
      }
      else {
        pcVar2 = (char *)0x0;
        if ((int)uVar5 != 0) {
          pcVar2 = (char *)((long)puVar1 + uVar5);
        }
        iVar3 = strcmp("__CUS_Float_1",pcVar2);
        if (iVar3 != 0) goto LAB_0037b158;
LAB_0037b1b8:
        *(undefined4 *)(param_2 + 0x124) = *(undefined4 *)((long)puVar1 + (ulong)puVar1[1]);
        uVar5 = (ulong)*puVar1;
        pcVar2 = (char *)0x0;
        if (*puVar1 != 0) {
          pcVar2 = (char *)((long)puVar1 + uVar5);
        }
        iVar3 = strcmp("__CUS_Float_2",pcVar2);
        if (iVar3 == 0) goto LAB_0037b1e0;
LAB_0037b170:
        pcVar2 = (char *)0x0;
        if ((int)uVar5 != 0) {
          pcVar2 = (char *)((long)puVar1 + uVar5);
        }
        iVar3 = strcmp("__CUS_Float_3",pcVar2);
      }
      if (iVar3 == 0) {
        *(undefined4 *)(param_2 + 300) = *(undefined4 *)(param_3 + (ulong)puVar1[1] + lVar4);
      }
      lVar4 = lVar4 + 0xc;
    } while (((uint)param_4 + (uint)param_4 * 2) * 4 != (int)lVar4);
  }
  return;
}

