
uint FUN_00147a74(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_150 [256];
  
  uVar1 = (uint)param_2;
  if ((*(ushort *)(param_1 + 0x15c4) >> 0xb & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_0015742c(lVar5);
    FUN_0014faa0(param_1,lVar5);
    FUN_00143300(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN_00143300(*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if ((uVar1 < 0x2b) && ((1L << (param_2 & 0x3f) & 0x40004800000U) != 0)) {
      param_3 = 1;
    }
    pcVar3 = *(code **)(*(long *)(lVar5 + 0x440) + 0x18);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(lVar5,param_2 & 0xffffffff,param_3 & 1);
    }
    uVar6 = 0x2a;
    if (uVar1 != 0x2a) {
      iVar2 = FUN_00146678(lVar5);
      uVar6 = 0x2a;
      if (iVar2 == 0 || uVar1 != 0) {
        uVar6 = uVar1;
      }
    }
    FUN_0014a06c(*(undefined8 *)(param_1 + 0xd8));
    if ((*(long *)(lVar5 + 0x4e0) == 0) && (*(long *)(lVar5 + 0x500) == 0)) {
      *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) | 0x800;
      if (*(long *)(lVar5 + 0x68) != 0) {
        FUN_0014a8a0(param_1);
        *(undefined8 *)(lVar5 + 0x68) = 0;
      }
      FUN_0014a208(param_1);
      FUN_00143300(*(undefined8 *)(param_1 + 0x1158));
      *(undefined8 *)(param_1 + 0x1158) = 0;
      if (*(int *)(param_1 + 0x1188) != 0) {
        uVar7 = 0;
        puVar4 = (undefined8 *)(param_1 + 0x1190);
        do {
          FUN_00143300(*puVar4);
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar7 < *(uint *)(param_1 + 0x1188));
      }
      *(undefined4 *)(param_1 + 0x1188) = 0;
      if ((((*(byte *)(param_1 + 0xf63) >> 4 & 1) == 0) &&
          (uVar1 = *(uint *)(lVar5 + 0x41c), (uVar1 & 1) == 0)) &&
         (((param_3 & 1) == 0 || ((*(byte *)(*(long *)(lVar5 + 0x440) + 0x85) >> 1 & 1) != 0)))) {
        memset(auStack_150,0,0x100);
        if ((uVar1 >> 6 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar1 >> 2 & 1) == 0) {
              puVar4 = (undefined8 *)(lVar5 + 0xd8);
            }
            else {
              puVar4 = (undefined8 *)(lVar5 + 0x108);
            }
          }
          else {
            puVar4 = (undefined8 *)(lVar5 + 0x168);
          }
        }
        else {
          puVar4 = (undefined8 *)(lVar5 + 0x128);
        }
        FUN_001460b8(auStack_150,0x100,"Connection #%ld to host %s left intact",
                     *(undefined8 *)(lVar5 + 0x60),*puVar4);
        uVar7 = FUN_0014ee80(lVar5);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x1138) = 0xffffffffffffffff;
        }
        else {
          *(undefined8 *)(param_1 + 0x1138) = *(undefined8 *)(lVar5 + 0x60);
          FUN_0014d430(param_1,&DAT_0407486c,auStack_150);
        }
      }
      else {
        uVar1 = FUN_0014f784(param_1,lVar5,param_3 & 1);
        if (uVar1 == 0 || uVar6 != 0) {
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      FUN_0014f3f0(param_1);
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

