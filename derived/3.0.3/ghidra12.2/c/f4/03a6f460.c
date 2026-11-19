
void FUN_03a6f460(long param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float __x;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  
  FUN_03a6e940();
  *(undefined4 *)(param_1 + 0x1440) = 0;
  if (*(int *)(param_1 + 0x1060) != 1) {
    *(int *)(param_1 + 0x1068) = *(int *)(param_1 + 0x1064);
    *(int *)(param_1 + 0x1064) = 1 - *(int *)(param_1 + 0x1064);
  }
  iVar1 = *(int *)(param_1 + 0x5e8);
  if (iVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x5f0);
    iVar14 = 0;
    do {
      plVar12 = (long *)(lVar10 + (long)iVar14 * 0x78);
      uVar9 = *(uint *)(param_1 + 0x1064);
      *(char *)((long)plVar12 + 0x39) = (char)uVar9;
      uVar3 = *(ushort *)((long)plVar12 + 0x3a);
      lVar4 = plVar12[6];
      iVar6 = (**(code **)(*plVar12 + 0x20))(plVar12);
      iVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
      lVar5 = plVar12[3];
      lVar8 = 0;
      if (plVar12[4] != 0) {
        lVar8 = (*DAT_04c61fd0)();
      }
      plVar12[2] = lVar8 + (ulong)((int)lVar5 +
                                  (uVar9 & 0xff) * (uint)uVar3 *
                                  (((int)lVar4 + iVar6) - 1U & -iVar7));
      iVar14 = iVar14 + 1;
    } while (iVar1 != iVar14);
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x1078);
  *(undefined8 *)(param_1 + 0x1058) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x1078)) {
    uVar13 = 0;
    do {
      if (uVar13 < (uVar11 & 0xffffffff)) {
        plVar12 = *(long **)(*(long *)(param_1 + 0x1080) + uVar13 * 8);
        bVar2 = *(byte *)(plVar12 + 1);
      }
      else {
        plVar12 = (long *)0x0;
        bVar2 = DAT_00000008;
      }
      if ((bVar2 & 1) != 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        uVar9 = *(uint *)(plVar12 + 1);
        if (((uVar9 >> 1 & 1) != 0) && (*(int *)(param_1 + 0x1440) < *(int *)(param_1 + 0x1444))) {
          *(long **)(*(long *)(param_1 + 0x1448) + (long)*(int *)(param_1 + 0x1440) * 8) = plVar12;
          *(int *)(param_1 + 0x1440) = *(int *)(param_1 + 0x1440) + 1;
          uVar9 = *(uint *)(plVar12 + 1);
        }
        if ((uVar9 >> 2 & 1) != 0) {
          uStack_88 = (undefined4)plVar12[5];
          fVar15 = *(float *)((long)plVar12 + 0x2c);
          local_8c = (undefined4)plVar12[3];
          *(uint *)(plVar12 + 1) = uVar9 & 0xfffffffb;
          __x = -fVar15;
          local_84 = (undefined4)plVar12[7];
          fVar16 = __x;
          if (0.0 <= fVar15) {
            fVar16 = fVar15;
          }
          if (1.1920929e-06 <= 1.0 - fVar16) {
            fVar16 = *(float *)((long)plVar12 + 0x1c);
            fVar15 = *(float *)((long)plVar12 + 0xc);
            local_98 = atan2f(*(float *)(plVar12 + 6),*(float *)((long)plVar12 + 0x34));
            local_94 = asinf(__x);
          }
          else {
            local_98 = 0.0;
            local_94 = (fVar15 / fVar16) * -1.5707964;
            fVar15 = *(float *)((long)plVar12 + 0x14) * __x;
            fVar16 = -*(float *)(plVar12 + 2);
          }
          local_90 = atan2f(fVar16,fVar15);
          FUN_03a6aadc((int)plVar12[9],*(undefined4 *)((long)plVar12 + 0x4c),(int)plVar12[10],
                       *(undefined4 *)((long)plVar12 + 0x54),*(undefined4 *)((long)plVar12 + 0x5c),
                       param_1 + 0x410,&local_8c,&local_98,(long)plVar12 + 0x3c,(int)plVar12[0xb],1)
          ;
        }
      }
      uVar11 = (ulong)*(int *)(param_1 + 0x1078);
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)uVar11);
  }
  return;
}

