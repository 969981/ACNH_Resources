
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003817d8(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ushort local_70;
  ushort uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulong uStack_58;
  ulong local_50;
  ulong uStack_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  fVar9 = (float)NEON_ucvtf((uint)local_70);
  local_38 = fVar9;
  (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(&local_70);
  local_40 = fVar9 * -0.5;
  puVar1 = (ulong *)(*(long *)(*(long *)(param_2 + 200) + 0x38) + (long)param_3);
  local_34 = (float)NEON_ucvtf((uint)uStack_6e);
  fStack_3c = local_34 * 0.5;
  FUN_00378348(&local_70,*(long *)(param_1 + 8) + 0x18,param_1 + 0x10);
  if ((*(byte *)(*(long *)(param_1 + 8) + 4) & 1) == 0) {
    *(uint *)(puVar1 + 0x12) = CONCAT22(uStack_6e,local_70);
    *(undefined4 *)(puVar1 + 0x13) = 0;
    *(undefined4 *)((long)puVar1 + 0x94) = uStack_6c;
    *(undefined4 *)((long)puVar1 + 0x9c) = uStack_68;
    *(undefined4 *)(puVar1 + 0x14) = uStack_64;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    *(undefined4 *)((long)puVar1 + 0xa4) = local_60;
    *(undefined4 *)((long)puVar1 + 0xac) = local_5c;
  }
  else {
    *(uint *)(puVar1 + 0xe) = CONCAT22(uStack_6e,local_70);
    *(undefined4 *)(puVar1 + 0xf) = 0;
    *(undefined4 *)((long)puVar1 + 0x74) = uStack_6c;
    *(undefined4 *)((long)puVar1 + 0x7c) = uStack_68;
    *(undefined4 *)(puVar1 + 0x10) = uStack_64;
    *(undefined4 *)(puVar1 + 0x11) = 0;
    *(undefined4 *)((long)puVar1 + 0x84) = local_60;
    *(undefined4 *)((long)puVar1 + 0x8c) = local_5c;
  }
  FUN_00364a10(param_2,puVar1,&local_40,&local_38,1,&DAT_04134eb8);
  fVar6 = fStack_3c + (fStack_3c - local_34);
  fVar9 = local_40 + local_40 + local_38;
  fVar7 = 1.0 / ((local_40 + local_38) - local_40);
  fVar8 = 1.0 / ((fStack_3c - local_34) - fStack_3c);
  FUN_0038cdc0(&local_70,param_2);
  uVar5 = _UNK_04102628;
  uVar4 = _DAT_04102620;
  uVar3 = DAT_04102218;
  uVar2 = DAT_04102210;
  puVar1[1] = (ulong)(uint)-(fVar9 * fVar7) << 0x20;
  *puVar1 = (ulong)(uint)(fVar7 + fVar7);
  puVar1[3] = (ulong)(uint)-(fVar6 * fVar8) << 0x20;
  puVar1[2] = (ulong)(uint)(fVar8 + fVar8) << 0x20;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar3;
  puVar1[6] = uVar2;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = local_50;
  puVar1[9] = CONCAT44(uStack_64,uStack_68);
  puVar1[8] = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
  puVar1[0xb] = uStack_58;
  puVar1[10] = CONCAT44(local_5c,local_60);
  return;
}

