
void FUN_0039995c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined2 extraout_var_00;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  uVar9 = *(ushort *)(param_1 + 0xdc);
  uVar5 = 0;
  local_68 = 0;
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xda));
  uVar11 = NEON_ucvtf((uint)uVar9);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde));
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  local_70 = uVar10;
  uStack_6c = uVar11;
  FUN_0037d114();
  local_78 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0));
  uStack_74 = CONCAT22(uVar5,uVar9);
  if (*(char *)(param_1 + 0x109) == '\x02') {
    FUN_0039b5e0(param_1,param_2,&local_78,*(undefined8 *)(param_1 + 0x110),&local_70,
                 *(undefined1 *)(param_1 + 0x5a));
    bVar1 = *(byte *)(param_1 + 0x10a);
  }
  else {
    if (*(char *)(param_1 + 0x109) == '\x01') {
      FUN_0039b1c0(param_1,param_2,&local_78,*(undefined8 *)(param_1 + 0x110),&local_70,
                   *(undefined1 *)(param_1 + 0x5a));
    }
    bVar1 = *(byte *)(param_1 + 0x10a);
  }
  if ((bVar1 >> 2 & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x118);
    if ((*(byte *)((long)plVar8 + 0x12) >> 1 & 1) == 0) {
      bVar4 = true;
      if (((((*(char *)(param_1 + 0xe8) == -1) && (*(char *)(param_1 + 0xe9) == -1)) &&
           (*(char *)(param_1 + 0xea) == -1)) &&
          (((*(char *)(param_1 + 0xeb) == -1 && (*(char *)(param_1 + 0xec) == -1)) &&
           ((*(char *)(param_1 + 0xed) == -1 &&
            ((*(char *)(param_1 + 0xee) == -1 && (*(char *)(param_1 + 0xef) == -1)))))))) &&
         ((*(char *)(param_1 + 0xf0) == -1 &&
          (((((*(char *)(param_1 + 0xf1) == -1 && (*(char *)(param_1 + 0xf2) == -1)) &&
             (*(char *)(param_1 + 0xf3) == -1)) &&
            ((*(char *)(param_1 + 0xf4) == -1 && (*(char *)(param_1 + 0xf5) == -1)))) &&
           ((*(char *)(param_1 + 0xf6) == -1 && (*(char *)(param_1 + 0xf7) == -1)))))))) {
        bVar4 = *(char *)(param_1 + 0x5a) != -1;
      }
    }
    else {
      bVar4 = true;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x5a);
    uVar6 = FUN_0037e5d0(param_1);
    uVar5 = FUN_0037e5a8(param_1);
    (**(code **)(*plVar8 + 0x20))
              (plVar8,param_2,uVar2,bVar4 ^ 1U,0,param_1 + 0x70,param_1 + 0x50,uVar6,uVar5);
    if ((bVar4 ^ 1U) == 0) {
      lVar7 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
      *(undefined4 *)(lVar7 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(lVar7 + 0x1a0) = uVar10;
      *(undefined4 *)(lVar7 + 0x1a4) = uVar11;
      *(undefined8 *)(lVar7 + 0x1a8) = 0;
      *(undefined4 *)(lVar7 + 0x1b4) = uVar3;
      lVar7 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe8));
      *(undefined4 *)(lVar7 + 0x1d0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xe9));
      *(undefined4 *)(lVar7 + 0x1d4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xea));
      *(undefined4 *)(lVar7 + 0x1d8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xeb));
      *(undefined4 *)(lVar7 + 0x1dc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xec));
      *(undefined4 *)(lVar7 + 0x1e0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xed));
      *(undefined4 *)(lVar7 + 0x1e4) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xee));
      *(undefined4 *)(lVar7 + 0x1e8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xef));
      *(undefined4 *)(lVar7 + 0x1ec) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf0));
      *(undefined4 *)(lVar7 + 0x1f0) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf1));
      *(undefined4 *)(lVar7 + 500) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf2));
      *(undefined4 *)(lVar7 + 0x1f8) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf3));
      *(undefined4 *)(lVar7 + 0x1fc) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf4));
      *(undefined4 *)(lVar7 + 0x200) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf5));
      *(undefined4 *)(lVar7 + 0x204) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf6));
      *(undefined4 *)(lVar7 + 0x208) = uVar3;
      uVar3 = NEON_ucvtf((uint)*(byte *)(param_1 + 0xf7));
      *(undefined4 *)(lVar7 + 0x20c) = uVar3;
    }
    bVar1 = *(byte *)(param_1 + 0x10a);
    lVar7 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
    *(uint *)(lVar7 + 0x22c) = -(bVar1 & 1) & 0xd00;
    FUN_0039b0dc(param_1,param_2,&local_78,&local_70);
  }
  return;
}

