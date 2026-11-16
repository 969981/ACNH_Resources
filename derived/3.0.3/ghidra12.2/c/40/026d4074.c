
void FUN_026d4074(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined *local_7e88;
  char *pcStack_7e80;
  undefined1 auStack_7ca4 [30104];
  undefined4 uStack_70c;
  undefined4 local_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined1 local_6f4;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  uint local_6d8;
  undefined2 local_6d4;
  undefined2 uStack_6d2;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined *local_6b8;
  char *local_6b0;
  undefined1 auStack_6a8 [56];
  undefined1 auStack_670 [56];
  undefined1 auStack_638 [32];
  undefined8 local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 auStack_480 [704];
  undefined1 auStack_1c0 [320];
  undefined8 local_80;
  ulong local_78;
  undefined1 *local_70;
  
  local_6b0 = "Bbs_Information";
  local_6b8 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = (uint *)(param_1 + 0xe0a68);
  FUN_006d8678(auStack_670,"0%02d",1);
  FUN_006d8678(auStack_6a8,"1%02d",1);
  memset(&local_7e88,0,0x77d0);
  local_6f8 = 0;
  local_6d8 = 0;
  local_6f4 = 2;
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  local_6d4 = 0xffff;
  local_708 = 0;
  uStack_704 = 0;
  local_700 = 0;
  uStack_6fc = 0;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6c0 = 0;
  uStack_6d0 = 0;
  uStack_6cc = 0;
  uStack_6c8 = 0;
  uStack_6c4 = 0;
  uVar8 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x12),
                     (uint)*(byte *)(param_2 + 0x13));
  if ((uVar8 & 1) != 0) {
    local_7e88 = (undefined *)CONCAT44(local_7e88._4_4_,uVar7);
  }
  uStack_6d2 = 5;
  FUN_01bdde78(auStack_638);
  local_78 = (ulong)&local_7e88 | 4;
  local_618 = 0;
  local_70 = auStack_7ca4;
  local_80 = 0;
  local_610 = auStack_480;
  local_608 = auStack_1c0;
  FUN_01bdd994(auStack_638,&local_6b8,auStack_670,auStack_6a8);
  uVar6 = *(uint *)(param_1 + 0xe0adc);
  pvVar3 = (void *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xe0adc) = *(undefined4 *)(param_1 + 0xe0ad8);
  *(undefined8 *)(param_1 + 0xe0ad4) = *(undefined8 *)(param_1 + 0xe0ad0);
  *(undefined8 *)(param_1 + 0xe0acc) = *(undefined8 *)(param_1 + 0xe0ac8);
  *(undefined8 *)(param_1 + 0xe0ac4) = *(undefined8 *)(param_1 + 0xe0ac0);
  *(undefined8 *)(param_1 + 0xe0abc) = *(undefined8 *)(param_1 + 0xe0ab8);
  uVar7 = *(undefined4 *)(param_1 + 0xe0ab4);
  *(undefined4 *)(param_1 + 0xe0ab4) = *(undefined4 *)(param_1 + 0xe0ab0);
  *(undefined4 *)(param_1 + 0xe0ab8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aac);
  *(undefined4 *)(param_1 + 0xe0aac) = *(undefined4 *)(param_1 + 0xe0aa8);
  *(undefined4 *)(param_1 + 0xe0ab0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aa4);
  *(undefined4 *)(param_1 + 0xe0aa4) = *(undefined4 *)(param_1 + 0xe0aa0);
  *(undefined4 *)(param_1 + 0xe0aa8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a9c);
  *(undefined4 *)(param_1 + 0xe0a9c) = *(undefined4 *)(param_1 + 0xe0a98);
  *(undefined4 *)(param_1 + 0xe0aa0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a94);
  *(undefined4 *)(param_1 + 0xe0a94) = *(undefined4 *)(param_1 + 0xe0a90);
  *(undefined4 *)(param_1 + 0xe0a98) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a8c);
  *(undefined4 *)(param_1 + 0xe0a8c) = *(undefined4 *)(param_1 + 0xe0a88);
  *(undefined4 *)(param_1 + 0xe0a90) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a84);
  *(undefined4 *)(param_1 + 0xe0a84) = *(undefined4 *)(param_1 + 0xe0a80);
  *(undefined4 *)(param_1 + 0xe0a88) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a7c);
  *(undefined4 *)(param_1 + 0xe0a7c) = *(undefined4 *)(param_1 + 0xe0a78);
  *(undefined4 *)(param_1 + 0xe0a80) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a74);
  *(undefined4 *)(param_1 + 0xe0a74) = *(undefined4 *)(param_1 + 0xe0a70);
  *(undefined4 *)(param_1 + 0xe0a78) = uVar7;
  uVar5 = *puVar2;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a6c);
  *puVar2 = uVar6;
  *(uint *)(param_1 + 0xe0a6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe0a70) = uVar7;
  pvVar4 = (void *)((long)pvVar3 + (ulong)uVar6 * 0x77d0);
  if (0x1d < uVar6) {
    pvVar4 = pvVar3;
  }
  memcpy(pvVar4,&local_7e88,0x777c);
  *(undefined8 *)((long)pvVar4 + 0x77a0) = local_6e8;
  *(undefined8 *)((long)pvVar4 + 0x77a8) = local_6e0;
  *(undefined8 *)((long)pvVar4 + 0x7798) = local_6f0;
  uVar5 = local_6d8;
  if (1 < local_6d8) {
    uVar5 = 0;
  }
  *(uint *)((long)pvVar4 + 0x77b0) = uVar5;
  *(ulong *)((long)pvVar4 + 0x77bc) = CONCAT44(uStack_6c8,uStack_6cc);
  *(ulong *)((long)pvVar4 + 0x77c4) = CONCAT44(local_6c0,uStack_6c4);
  *(ulong *)((long)pvVar4 + 0x77b4) = CONCAT44(uStack_6d0,CONCAT22(uStack_6d2,local_6d4));
  *(ulong *)((long)pvVar4 + 0x777c) = CONCAT44(local_708,uStack_70c);
  *(ulong *)((long)pvVar4 + 0x7784) = CONCAT44(local_700,uStack_704);
  *(ulong *)((long)pvVar4 + 0x778c) = CONCAT44(local_6f8,uStack_6fc);
  *(undefined1 *)((long)pvVar4 + 0x7794) = local_6f4;
  iVar1 = *(int *)(param_1 + 0xe0ae0) + 1;
  *(int *)(param_1 + 0xe0ae0) = iVar1;
  pvVar4 = (void *)((long)pvVar3 + (ulong)*puVar2 * 0x77d0);
  if (0x1d < *puVar2) {
    pvVar4 = pvVar3;
  }
  *(int *)((long)pvVar4 + 0x77c8) = iVar1;
  FUN_006d8678(auStack_670,"0%02d",2);
  FUN_006d8678(auStack_6a8,"1%02d",2);
  memset(&local_7e88,0,0x77d0);
  local_6f4 = 2;
  local_6f8 = 0;
  local_6d4 = 0xffff;
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  local_708 = 0;
  uStack_704 = 0;
  local_700 = 0;
  uStack_6fc = 0;
  local_6d8 = 0;
  local_6f0 = 0;
  local_6e8 = 0;
  local_6e0 = 0;
  local_6c0 = 0;
  uStack_6d0 = 0;
  uStack_6cc = 0;
  uStack_6c8 = 0;
  uStack_6c4 = 0;
  uVar8 = nn::time::IsValidDate
                    ((uint)*(ushort *)(param_2 + 0x10),(uint)*(byte *)(param_2 + 0x12),
                     (uint)*(byte *)(param_2 + 0x13));
  if ((uVar8 & 1) != 0) {
    local_7e88 = (undefined *)CONCAT44(local_7e88._4_4_,uVar7);
  }
  uStack_6d2 = 5;
  FUN_01bdde78(auStack_638);
  local_618 = 0;
  local_78 = (ulong)&local_7e88 | 4;
  local_80 = 0;
  local_70 = auStack_7ca4;
  local_610 = auStack_480;
  local_608 = auStack_1c0;
  FUN_01bdd994(auStack_638,&local_6b8,auStack_670,auStack_6a8);
  uVar6 = *(uint *)(param_1 + 0xe0adc);
  *(undefined4 *)(param_1 + 0xe0adc) = *(undefined4 *)(param_1 + 0xe0ad8);
  *(undefined8 *)(param_1 + 0xe0ad4) = *(undefined8 *)(param_1 + 0xe0ad0);
  *(undefined8 *)(param_1 + 0xe0acc) = *(undefined8 *)(param_1 + 0xe0ac8);
  *(undefined8 *)(param_1 + 0xe0ac4) = *(undefined8 *)(param_1 + 0xe0ac0);
  *(undefined8 *)(param_1 + 0xe0abc) = *(undefined8 *)(param_1 + 0xe0ab8);
  uVar7 = *(undefined4 *)(param_1 + 0xe0ab4);
  *(undefined4 *)(param_1 + 0xe0ab4) = *(undefined4 *)(param_1 + 0xe0ab0);
  *(undefined4 *)(param_1 + 0xe0ab8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aac);
  *(undefined4 *)(param_1 + 0xe0aac) = *(undefined4 *)(param_1 + 0xe0aa8);
  *(undefined4 *)(param_1 + 0xe0ab0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0aa4);
  *(undefined4 *)(param_1 + 0xe0aa4) = *(undefined4 *)(param_1 + 0xe0aa0);
  *(undefined4 *)(param_1 + 0xe0aa8) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a9c);
  *(undefined4 *)(param_1 + 0xe0a9c) = *(undefined4 *)(param_1 + 0xe0a98);
  *(undefined4 *)(param_1 + 0xe0aa0) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a94);
  *(undefined4 *)(param_1 + 0xe0a94) = *(undefined4 *)(param_1 + 0xe0a90);
  *(undefined4 *)(param_1 + 0xe0a98) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a8c);
  *(undefined4 *)(param_1 + 0xe0a8c) = *(undefined4 *)(param_1 + 0xe0a88);
  *(undefined4 *)(param_1 + 0xe0a90) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a84);
  *(undefined4 *)(param_1 + 0xe0a84) = *(undefined4 *)(param_1 + 0xe0a80);
  *(undefined4 *)(param_1 + 0xe0a88) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a7c);
  *(undefined4 *)(param_1 + 0xe0a7c) = *(undefined4 *)(param_1 + 0xe0a78);
  *(undefined4 *)(param_1 + 0xe0a80) = uVar7;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a74);
  *(undefined4 *)(param_1 + 0xe0a74) = *(undefined4 *)(param_1 + 0xe0a70);
  *(undefined4 *)(param_1 + 0xe0a78) = uVar7;
  uVar5 = *puVar2;
  uVar7 = *(undefined4 *)(param_1 + 0xe0a6c);
  *puVar2 = uVar6;
  *(uint *)(param_1 + 0xe0a6c) = uVar5;
  *(undefined4 *)(param_1 + 0xe0a70) = uVar7;
  pvVar4 = (void *)((long)pvVar3 + (ulong)uVar6 * 0x77d0);
  if (0x1d < uVar6) {
    pvVar4 = pvVar3;
  }
  memcpy(pvVar4,&local_7e88,0x777c);
  *(undefined8 *)((long)pvVar4 + 0x77a0) = local_6e8;
  *(undefined8 *)((long)pvVar4 + 0x7798) = local_6f0;
  *(undefined8 *)((long)pvVar4 + 0x77a8) = local_6e0;
  *(ulong *)((long)pvVar4 + 0x77bc) = CONCAT44(uStack_6c8,uStack_6cc);
  *(ulong *)((long)pvVar4 + 0x77c4) = CONCAT44(local_6c0,uStack_6c4);
  *(ulong *)((long)pvVar4 + 0x778c) = CONCAT44(local_6f8,uStack_6fc);
  *(ulong *)((long)pvVar4 + 0x77b4) = CONCAT44(uStack_6d0,CONCAT22(uStack_6d2,local_6d4));
  uVar5 = local_6d8;
  if (1 < local_6d8) {
    uVar5 = 0;
  }
  *(uint *)((long)pvVar4 + 0x77b0) = uVar5;
  *(ulong *)((long)pvVar4 + 0x777c) = CONCAT44(local_708,uStack_70c);
  *(ulong *)((long)pvVar4 + 0x7784) = CONCAT44(local_700,uStack_704);
  *(undefined1 *)((long)pvVar4 + 0x7794) = local_6f4;
  iVar1 = *(int *)(param_1 + 0xe0ae0) + 1;
  *(int *)(param_1 + 0xe0ae0) = iVar1;
  pvVar4 = (void *)((long)pvVar3 + (ulong)*puVar2 * 0x77d0);
  if (0x1d < *puVar2) {
    pvVar4 = pvVar3;
  }
  *(int *)((long)pvVar4 + 0x77c8) = iVar1;
  local_7e88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_7e80 = "RadioGymnasticsBbsFlag";
  FUN_0273f3c4(&local_7e88,1);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

