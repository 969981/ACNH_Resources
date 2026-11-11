
void FUN_00399598(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 extraout_b0;
  byte bVar8;
  undefined1 extraout_var;
  undefined2 extraout_var_00;
  ushort uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar10 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xda));
  uVar11 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc));
  uVar9 = *(ushort *)(param_1 + 0xe0);
  uVar4 = 0;
  uVar12 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde));
  uVar13 = NEON_ucvtf((uint)uVar9);
  local_80 = uVar10;
  uStack_7c = uVar11;
  local_78 = uVar12;
  uStack_74 = uVar13;
  FUN_0037d114();
  cVar2 = *(char *)(param_1 + 0x109);
  local_38 = CONCAT22(extraout_var_00,CONCAT11(extraout_var,extraout_b0));
  uStack_34 = CONCAT22(uVar4,uVar9);
  if (cVar2 == '\b') {
    FUN_0039ac20(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_80,
                 *(undefined1 *)(param_1 + 0x5a));
  }
  else {
    if (cVar2 == '\x04') {
      FUN_0039a7a0(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_80,
                   *(undefined1 *)(param_1 + 0x5a));
      bVar8 = *(byte *)(param_1 + 0x10a);
      goto joined_r0x00399658;
    }
    if (cVar2 == '\x01') {
      FUN_0039a1b0(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_80,
                   *(undefined1 *)(param_1 + 0x5a));
      bVar8 = *(byte *)(param_1 + 0x10a);
      goto joined_r0x00399658;
    }
  }
  bVar8 = *(byte *)(param_1 + 0x10a);
joined_r0x00399658:
  if ((bVar8 >> 2 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x118);
    if ((((((((*(byte *)((long)plVar7 + 0x12) >> 1 & 1) == 0) && (*(char *)(param_1 + 0xe8) == -1))
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
      (**(code **)(*plVar7 + 0x20))
                (plVar7,param_2,0xff,1,1,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      uVar10 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x5a);
      uVar5 = FUN_0037e5d0(param_1);
      uVar4 = FUN_0037e5a8(param_1);
      (**(code **)(*plVar7 + 0x20))
                (plVar7,param_2,uVar1,0,1,param_1 + 0x70,param_1 + 0x50,uVar5,uVar4);
      if ((*(byte *)(param_1 + 0x10a) & 1) == 0) {
        lVar6 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
        bVar8 = *(byte *)(param_1 + 0xe8);
        uVar10 = 0;
      }
      else {
        lVar6 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
        *(undefined4 *)(lVar6 + 0x1b0) = *(undefined4 *)(param_1 + 0x50);
        uVar3 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(lVar6 + 0x1a0) = uVar10;
        *(undefined4 *)(lVar6 + 0x1a4) = uVar11;
        *(undefined4 *)(lVar6 + 0x1a8) = uVar12;
        *(undefined4 *)(lVar6 + 0x1ac) = uVar13;
        *(undefined4 *)(lVar6 + 0x1b4) = uVar3;
        lVar6 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
        bVar8 = *(byte *)(param_1 + 0xe8);
        uVar10 = 0xd00;
      }
      uVar11 = NEON_ucvtf((uint)bVar8);
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
    lVar6 = FUN_003788bc(*(undefined8 *)(param_1 + 0x118),param_2);
    *(undefined4 *)(lVar6 + 0x22c) = uVar10;
    FUN_0039b0dc(param_1,param_2,&local_38,&local_80);
  }
  return;
}

