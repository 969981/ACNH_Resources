
void FUN_0124c1e8(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [2];
  byte local_3e;
  undefined8 local_38;
  
  lVar5 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4(param_2);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(auStack_48,param_2);
      iVar3 = FUN_0123db50(auStack_40,local_38);
      if (((iVar3 == 0x21) || (iVar3 = FUN_0123db50(auStack_40,local_38), iVar3 == 0x22)) &&
         ((iVar3 = FUN_0123db50(auStack_40,local_38), iVar3 == 0x21 ||
          (iVar3 = FUN_0123db50(auStack_40,local_38), iVar3 == 0x22)))) {
        local_3e = local_3e & 0xe3;
      }
      local_50 = 0xfffe;
      FUN_0277d4ac(&local_50);
      if (((param_3 & 1) == 0) ||
         (uVar4 = FUN_0124c4c0(auStack_48,&local_50,1), puVar1 = PTR_DAT_04bb43c0, (uVar4 & 1) == 0)
         ) {
LAB_0124c358:
        uVar4 = FUN_0124c70c(auStack_48,&local_50);
        puVar1 = PTR_DAT_04bb43c0;
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)PTR_DAT_04bb43c0;
          uVar2 = FUN_0277d6c4(&local_50);
          if (*(long *)puVar1 != 0) {
            lVar5 = *(long *)(lVar5 + 0x57e58);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) goto LAB_0124c414;
          }
        }
        uVar4 = FUN_0124c4c0(auStack_48,&local_50,1);
        puVar1 = PTR_DAT_04bb43c0;
        if ((uVar4 & 1) == 0) {
LAB_0124c438:
          *param_1 = 0x8a5;
          FUN_0277d4ac(param_1);
          return;
        }
        lVar5 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 == 0) goto LAB_0124c438;
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_0124c438;
      }
      else {
        lVar5 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar1 == 0) goto LAB_0124c358;
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((*(uint *)(lVar5 + 0x1d8) <= uVar2) ||
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_0124c358;
      }
LAB_0124c414:
      goto LAB_0124c420;
    }
  }
  local_50._0_4_ = *param_2;
  local_50._4_4_ = param_2[1];
LAB_0124c420:
  *(undefined4 *)param_1 = (undefined4)local_50;
  *(undefined4 *)((long)param_1 + 4) = local_50._4_4_;
  return;
}

