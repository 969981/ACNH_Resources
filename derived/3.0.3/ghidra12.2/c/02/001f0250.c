
void FUN_001f0250(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,ulong *param_7,byte param_8,
                 undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  undefined1 auStack_a0 [8];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  *(undefined8 *)(param_2 + 0x128) = param_11;
  uVar2 = *param_7;
  uVar3 = param_7[1];
  uVar4 = uVar3 - uVar2;
  if (uVar4 != 0) {
    local_98 = (undefined8 *)0x0;
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8(&local_98);
    }
    local_98 = (undefined8 *)FUN_00187df4(uVar4);
    local_88 = (undefined8 *)((long)local_98 + uVar4);
    puVar5 = local_98;
    for (uVar1 = uVar4 & 7; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined8 *)((long)puVar5 + 1);
    }
    if (6 < ~uVar2 + uVar3) {
      do {
        puVar6 = puVar5 + 1;
        *puVar5 = 0;
        puVar5 = puVar6;
      } while (puVar6 != local_88);
    }
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_90 = local_88;
    uStack_68 = uVar4;
    if ((undefined1 *)(param_2 + 0x130) == auStack_a0) {
      if (local_98 != (undefined8 *)0x0) {
        local_90 = local_98;
        FUN_00187e4c();
      }
    }
    else {
      if (*(long *)(param_2 + 0x138) != 0) {
        *(long *)(param_2 + 0x140) = *(long *)(param_2 + 0x138);
        FUN_00187e4c();
      }
      *(undefined8 *)(param_2 + 0x158) = uStack_78;
      *(undefined8 *)(param_2 + 0x160) = local_70;
      *(ulong *)(param_2 + 0x168) = uStack_68;
      *(undefined8 **)(param_2 + 0x138) = local_98;
      *(undefined8 **)(param_2 + 0x140) = local_90;
      *(undefined8 **)(param_2 + 0x148) = local_88;
      *(undefined8 *)(param_2 + 0x150) = local_80;
    }
    FUN_0018a5b8((undefined1 *)(param_2 + 0x130),*param_7,param_7[1] - *param_7);
  }
  *(undefined4 *)(param_2 + 0x120) = param_6;
  if ((undefined8 *)(param_2 + 0x170) != param_9) {
    FUN_001dbd00((undefined8 *)(param_2 + 0x170),*param_9,param_9 + 1);
  }
  *(byte *)(param_2 + 0x198) = param_8 & 1;
  *(undefined8 *)(param_2 + 0x188) = param_12;
  *(undefined8 *)(param_2 + 400) = param_10;
  FUN_001f0554(param_1,param_2,param_3,param_4,param_5,param_2 + 0x118,0x4000);
  return;
}

