
void FUN_0039a1b0(long param_1,long param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  byte *pbVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 uVar11;
  float local_70;
  float fStack_6c;
  undefined8 local_68;
  
  plVar9 = *(long **)(param_4 + 8);
  if ((*(byte *)((long)plVar9 + 0x14) & 3) != 0) {
    if ((((((((*(byte *)((long)plVar9 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_1 + 0xe8) == -1))
           && (*(char *)(param_1 + 0xe9) == -1)) &&
          ((*(char *)(param_1 + 0xea) == -1 && (*(char *)(param_1 + 0xeb) == -1)))) &&
         ((*(char *)(param_1 + 0xec) == -1 &&
          ((*(char *)(param_1 + 0xed) == -1 && (*(char *)(param_1 + 0xee) == -1)))))) &&
        (*(char *)(param_1 + 0xef) == -1)) &&
       (((((*(char *)(param_1 + 0xf0) == -1 && (*(char *)(param_1 + 0xf1) == -1)) &&
          (*(char *)(param_1 + 0xf2) == -1)) &&
         (((*(char *)(param_1 + 0xf3) == -1 && (*(char *)(param_1 + 0xf4) == -1)) &&
          ((*(char *)(param_1 + 0xf5) == -1 &&
           ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) &&
        (*(char *)(param_1 + 0x5a) == -1)))) {
      uVar5 = FUN_0037e5d0(param_1);
      uVar4 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar9 + 0x20))
                (plVar9,param_2,param_6,1,0,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
        *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar6 + 0x1a0) = *param_5;
        *(float *)(lVar6 + 0x1a4) = param_5[1];
        *(float *)(lVar6 + 0x1a8) = param_5[2];
        *(float *)(lVar6 + 0x1ac) = param_5[3];
      }
    }
    else {
      uVar5 = FUN_0037e5d0(param_1);
      uVar4 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar9 + 0x20))
                (plVar9,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
        *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
        *(float *)(lVar6 + 0x1a0) = *param_5;
        *(float *)(lVar6 + 0x1a4) = param_5[1];
        *(float *)(lVar6 + 0x1a8) = param_5[2];
        *(float *)(lVar6 + 0x1ac) = param_5[3];
        lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
        *(undefined4 *)(lVar6 + 0x1d0) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
        *(undefined4 *)(lVar6 + 0x1d4) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
        *(undefined4 *)(lVar6 + 0x1d8) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
        *(undefined4 *)(lVar6 + 0x1dc) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
        *(undefined4 *)(lVar6 + 0x1e0) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
        *(undefined4 *)(lVar6 + 0x1e4) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
        *(undefined4 *)(lVar6 + 0x1e8) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
        *(undefined4 *)(lVar6 + 0x1ec) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
        *(undefined4 *)(lVar6 + 0x1f0) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
        *(undefined4 *)(lVar6 + 500) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
        *(undefined4 *)(lVar6 + 0x1f8) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
        *(undefined4 *)(lVar6 + 0x1fc) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
        *(undefined4 *)(lVar6 + 0x200) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
        *(undefined4 *)(lVar6 + 0x204) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
        *(undefined4 *)(lVar6 + 0x208) = uVar11;
        uVar11 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
        *(undefined4 *)(lVar6 + 0x20c) = uVar11;
      }
    }
    fStack_6c = param_5[2];
    local_68 = *(undefined8 *)param_3;
    uVar11 = 0x40000813;
    local_70 = *(float *)(param_1 + 0x50) - param_5[1];
    if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
      uVar11 = 0x813;
    }
    lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
    *(undefined4 *)(lVar6 + 0x22c) = uVar11;
    uVar5 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
    FUN_003649e0(param_2,uVar5,&local_68,&local_70);
    pbVar8 = *(byte **)(param_2 + 200);
    lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar10 = lVar6 + 0x22fU & -lVar6;
    if ((*pbVar8 & 1) == 0) {
      lVar6 = *(long *)(pbVar8 + 0x40);
      *(ulong *)(pbVar8 + 0x40) = lVar6 + uVar10;
    }
    else {
      plVar9 = *(long **)(pbVar8 + 0x40);
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    **(undefined4 **)(param_1 + 0x120) = (int)lVar6;
    pbVar8 = *(byte **)(param_2 + 200);
    if (*(long *)(pbVar8 + 0x38) != 0) {
      pvVar1 = (void *)(*(long *)(pbVar8 + 0x38) + (ulong)**(uint **)(param_1 + 0x120));
      pvVar7 = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(pvVar1,pvVar7,0x230);
      uVar11 = 0x40020923;
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        uVar11 = 0x20923;
      }
      *(undefined4 *)((long)pvVar1 + 0x22c) = uVar11;
      local_70 = param_5[1];
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - local_70);
      fStack_6c = *(float *)(param_1 + 0x54) - param_5[3];
      FUN_003649e0(param_2,pvVar1,&local_68,&local_70);
      pbVar8 = *(byte **)(param_2 + 200);
    }
    if ((*pbVar8 & 1) == 0) {
      lVar6 = *(long *)(pbVar8 + 0x40);
      *(ulong *)(pbVar8 + 0x40) = lVar6 + uVar10;
    }
    else {
      plVar9 = *(long **)(pbVar8 + 0x40);
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(int *)(*(long *)(param_1 + 0x120) + 4) = (int)lVar6;
    pbVar8 = *(byte **)(param_2 + 200);
    if (*(long *)(pbVar8 + 0x38) != 0) {
      pvVar1 = (void *)(*(long *)(pbVar8 + 0x38) + (ulong)*(uint *)(*(long *)(param_1 + 0x120) + 4))
      ;
      pvVar7 = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(pvVar1,pvVar7,0x230);
      uVar11 = 0x40060b17;
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        uVar11 = 0x60b17;
      }
      *(undefined4 *)((long)pvVar1 + 0x22c) = uVar11;
      fStack_6c = param_5[3];
      local_70 = *(float *)(param_1 + 0x50) - *param_5;
      local_68 = CONCAT44((param_3[1] - *(float *)(param_1 + 0x54)) + fStack_6c,*param_3 + *param_5)
      ;
      FUN_003649e0(param_2,pvVar1,&local_68,&local_70);
      pbVar8 = *(byte **)(param_2 + 200);
    }
    if ((*pbVar8 & 1) == 0) {
      lVar6 = *(long *)(pbVar8 + 0x40);
      *(ulong *)(pbVar8 + 0x40) = lVar6 + uVar10;
    }
    else {
      plVar9 = *(long **)(pbVar8 + 0x40);
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(int *)(*(long *)(param_1 + 0x120) + 8) = (int)lVar6;
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar6 != 0) {
      pvVar1 = (void *)(lVar6 + (ulong)*(uint *)(*(long *)(param_1 + 0x120) + 8));
      pvVar7 = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(pvVar1,pvVar7,0x230);
      uVar11 = 0x40040a2b;
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        uVar11 = 0x40a2b;
      }
      *(undefined4 *)((long)pvVar1 + 0x22c) = uVar11;
      fStack_6c = *(float *)(param_1 + 0x54) - param_5[2];
      local_68 = CONCAT44(param_3[1] - param_5[2],*param_3);
      local_70 = *param_5;
      FUN_003649e0(param_2,pvVar1,&local_68,&local_70);
    }
  }
  return;
}

