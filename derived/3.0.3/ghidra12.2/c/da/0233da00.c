
void FUN_0233da00(long param_1,ulong param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  byte bVar5;
  ulong uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = 1;
  if ((((*(uint *)(param_1 + 0x15f4) >> 1 & 1) == 0) || (*(long *)(param_1 + 0x14a0) == 0)) ||
     (uVar6 = FUN_02327ff8(), (uVar6 & 1) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_1 + 0xc341) = uVar7;
  iVar1 = *(int *)(param_1 + 0x5f40);
  if (iVar1 - 2U < 2) {
LAB_0233da98:
    pbVar8 = (byte *)(param_1 + 0x5f44);
  }
  else {
    if (iVar1 == 5) {
      if (*(byte *)(param_1 + 0x6050) < 8) {
        pbVar8 = (byte *)(param_1 + 0x6050);
        goto LAB_0233dabc;
      }
    }
    else if (iVar1 == 1) goto LAB_0233da98;
    pbVar8 = &DAT_0548e140;
  }
LAB_0233dabc:
  bVar5 = *pbVar8;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_28 = CONCAT31(local_28._1_3_,bVar5);
  bVar5 = FUN_02538bb0(&local_28);
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0xc391) = bVar5;
  uVar4 = DAT_0558600c;
  uVar3 = DAT_0558600b;
  uVar7 = DAT_0558600a;
  uVar2 = DAT_05586008;
  if ((param_2 & 1) == 0) {
    FUN_02339ca4(&local_28,param_1,bVar5);
    lVar9 = *(long *)(param_1 + 0xbdd0);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a1e8(&local_28,param_1,bVar5);
    lVar9 = *(long *)(param_1 + 0xbde8);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a308(&local_28,param_1,bVar5,0);
    lVar9 = *(long *)(param_1 + 0xbdf0);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a4f4(&local_28,param_1);
    lVar9 = *(long *)(param_1 + 0xbdf8);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a624(&local_28,param_1);
    lVar9 = *(long *)(param_1 + 0xbe00);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_02339f88(&local_28,param_1);
    lVar9 = *(long *)(param_1 + 0xbdd8);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a0b8(&local_28,param_1);
    lVar9 = *(long *)(param_1 + 0xbde0);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a754(&local_28,param_1);
    lVar9 = *(long *)(param_1 + 0xbe08);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
    FUN_0233a884(&local_28,param_1,bVar5);
    lVar9 = *(long *)(param_1 + 0x1480);
    *(undefined4 *)(lVar9 + 0xcc) = local_28;
    *(undefined4 *)(lVar9 + 0xd0) = uStack_24;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xbdd0);
    *(undefined2 *)(lVar9 + 0xcc) = DAT_05586008;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbde8);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbdf0);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbdf8);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbe00);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbdd8);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbde0);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0xbe08);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
    lVar9 = *(long *)(param_1 + 0x1480);
    *(undefined2 *)(lVar9 + 0xcc) = uVar2;
    *(undefined1 *)(lVar9 + 0xce) = uVar7;
    *(undefined1 *)(lVar9 + 0xcf) = uVar3;
    *(undefined4 *)(lVar9 + 0xd0) = uVar4;
  }
  return;
}

