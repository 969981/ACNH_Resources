
void FUN_0039b1c0(long param_1,long param_2,float *param_3,long param_4,float *param_5,
                 undefined4 param_6)

{
  void *__dest;
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__src;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 uVar10;
  float local_70;
  undefined4 uStack_6c;
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
      bVar1 = *(byte *)(param_1 + 0x10a);
    }
    else {
      uVar5 = FUN_0037e5d0(param_1);
      uVar4 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar9 + 0x20))
                (plVar9,param_2,param_6,0,0,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
      *(undefined4 *)(lVar6 + 0x1d0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
      *(undefined4 *)(lVar6 + 0x1d4) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
      *(undefined4 *)(lVar6 + 0x1d8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
      *(undefined4 *)(lVar6 + 0x1dc) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
      *(undefined4 *)(lVar6 + 0x1e0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
      *(undefined4 *)(lVar6 + 0x1e4) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
      *(undefined4 *)(lVar6 + 0x1e8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
      *(undefined4 *)(lVar6 + 0x1ec) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
      *(undefined4 *)(lVar6 + 0x1f0) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
      *(undefined4 *)(lVar6 + 500) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
      *(undefined4 *)(lVar6 + 0x1f8) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
      *(undefined4 *)(lVar6 + 0x1fc) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
      *(undefined4 *)(lVar6 + 0x200) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
      *(undefined4 *)(lVar6 + 0x204) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
      *(undefined4 *)(lVar6 + 0x208) = uVar10;
      uVar10 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
      *(undefined4 *)(lVar6 + 0x20c) = uVar10;
      bVar1 = *(byte *)(param_1 + 0x10a);
    }
    if ((bVar1 & 1) != 0) {
      lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(lVar6 + 0x1b4) = *(undefined4 *)(param_1 + 0x54);
      *(float *)(lVar6 + 0x1a0) = *param_5;
      *(float *)(lVar6 + 0x1a4) = param_5[1];
      *(float *)(lVar6 + 0x1a8) = param_5[2];
      *(float *)(lVar6 + 0x1ac) = param_5[3];
    }
    uVar10 = 0x40000403;
    if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
      uVar10 = 0x403;
    }
    lVar6 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
    *(undefined4 *)(lVar6 + 0x22c) = uVar10;
    local_70 = *param_5;
    uStack_6c = *(undefined4 *)(param_1 + 0x54);
    local_68 = *(undefined8 *)param_3;
    uVar5 = FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
    FUN_003649e0(param_2,uVar5,&local_68,&local_70);
    pbVar7 = *(byte **)(param_2 + 200);
    lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar8 = lVar6 + 0x22fU & -lVar6;
    if ((*pbVar7 & 1) == 0) {
      lVar6 = *(long *)(pbVar7 + 0x40);
      *(ulong *)(pbVar7 + 0x40) = lVar6 + uVar8;
    }
    else {
      plVar9 = *(long **)(pbVar7 + 0x40);
      do {
        lVar6 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar6 + uVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    **(undefined4 **)(param_1 + 0x120) = (int)lVar6;
    lVar6 = *(long *)(*(long *)(param_2 + 200) + 0x38);
    if (lVar6 != 0) {
      __dest = (void *)(lVar6 + (ulong)**(uint **)(param_1 + 0x120));
      __src = (void *)FUN_003788bc(*(undefined8 *)(param_4 + 8),param_2);
      memcpy(__dest,__src,0x230);
      uVar10 = 0x40020503;
      if ((*(byte *)(param_1 + 0x10a) & 1) != 0) {
        uVar10 = 0x20503;
      }
      *(undefined4 *)((long)__dest + 0x22c) = uVar10;
      uStack_6c = *(undefined4 *)(param_1 + 0x54);
      local_70 = param_5[1];
      local_68 = CONCAT44(param_3[1],(*param_3 + *(float *)(param_1 + 0x50)) - local_70);
      FUN_003649e0(param_2,__dest,&local_68,&local_70);
    }
  }
  return;
}

