
undefined8 FUN_02088ec0(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_34;
  
  puVar4 = *(undefined8 **)(param_1 + 0x568);
  uVar1 = *(uint *)(param_1 + 0x560);
  iVar2 = *param_2;
  if (uVar1 != 0) {
    lVar5 = (long)(int)uVar1 << 3;
    puVar7 = puVar4;
    do {
      if (iVar2 == *(int *)*puVar7) {
        FUN_020880a8(param_1,(int *)*puVar7,param_2);
        return 1;
      }
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if (((iVar2 == 0) || (iVar2 == *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x230))) ||
     (*(int *)(param_1 + 0x564) <= (int)uVar1)) {
LAB_02088f80:
    uVar3 = 0;
  }
  else {
    if (0 < (int)uVar1) {
      uVar6 = (ulong)uVar1;
      lVar5 = 0xffffffff;
      do {
        if (iVar2 == *(int *)*puVar4) {
          if (lVar5 != 0) goto LAB_02088f80;
          break;
        }
        lVar5 = lVar5 + -1;
        uVar6 = uVar6 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
    }
    local_4c = *(undefined4 *)PTR_DAT_04bb3238;
    iVar2 = FUN_02089050(2);
    local_40 = 0;
    uStack_3c = 0;
    local_48 = 0;
    if (iVar2 != -1) {
      local_48 = iVar2;
    }
    local_38 = local_38 & 0xffffff00;
    uStack_44 = 0x5a;
    local_34 = 0x7f7fffff;
    uVar6 = FUN_020880a8(param_1,&local_4c,param_2);
    if (((uVar6 & 1) != 0) && (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564))) {
      puVar4 = *(undefined8 **)(param_1 + 0x570);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x570) = *puVar4;
      }
      *(undefined4 *)puVar4 = local_4c;
      *(int *)((long)puVar4 + 4) = local_48;
      puVar4[1] = CONCAT44(local_40,uStack_44);
      puVar4[2] = CONCAT44(local_38,uStack_3c);
      *(undefined4 *)(puVar4 + 3) = local_34;
      if (*(int *)(param_1 + 0x560) < *(int *)(param_1 + 0x564)) {
        *(undefined8 **)(*(long *)(param_1 + 0x568) + (long)*(int *)(param_1 + 0x560) * 8) = puVar4;
        *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + 1;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

