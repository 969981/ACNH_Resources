
void FUN_0029d010(undefined8 param_1,long param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_ec;
  undefined4 local_e4;
  int local_e0 [4];
  undefined8 local_d0;
  undefined4 local_c8;
  
  if ((*(int *)(param_2 + 0xd8) - 3U < 5) || (*(int *)(param_2 + 0xd8) == 2)) {
    local_d0 = CONCAT44(local_d0._4_4_,0x2c18);
    goto LAB_0029d04c;
  }
  if ((*(long *)(param_2 + 0x70) != 0) && (uVar1 = FUN_002212e4(), (uVar1 & 1) != 0)) {
    (**(code **)(**(long **)(param_2 + 0x70) + 0xb0))(*(long **)(param_2 + 0x70),param_3,param_4);
  }
  if (((*(int *)(param_2 + (ulong)((ulong)*(byte *)(param_2 + 0x162) == 0) * 4 + 0x180) == param_3)
      || (*(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180) == param_3)) &&
     ((*(int *)(param_2 + 0xd4) != 0 || (*(long *)(param_2 + 0xf0) == param_4)))) {
    lVar2 = FUN_002ba790(DAT_04c61168);
    plVar3 = (long *)FUN_002ba788(DAT_04c61168);
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 != lVar2 + 0x18) {
      bVar6 = false;
      do {
        FUN_002b3fa8(&local_d0);
        (**(code **)(*plVar3 + 0x20))(local_e0,plVar3,*(undefined8 *)(lVar5 + 0x10),&local_d0);
        if ((local_e0[0] == 0) && (lVar4 = FUN_002b43ec(&local_d0), lVar4 == param_4)) {
          local_ec = 0x2000000000000;
          local_e4 = 0;
          (**(code **)(**(long **)(lVar5 + 0x10) + 0x28))(*(long **)(lVar5 + 0x10),&local_ec);
          lVar4 = *(long *)(lVar5 + 0x10);
          if (*(int *)(lVar4 + 0x4c) == 5) {
            bVar6 = true;
            *(undefined1 *)(lVar4 + 0x88) = 1;
          }
          else {
            bVar6 = true;
            *(undefined4 *)(lVar4 + 0x4c) = 7;
          }
        }
        FUN_002b4104(&local_d0);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != lVar2 + 0x18);
      if (bVar6) goto LAB_0029d1d0;
    }
    plVar3 = (long *)FUN_002ba790(DAT_04c61168);
    local_c8 = 0;
    local_d0 = 0x2000000000000;
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_d0);
    local_d0 = CONCAT44(local_d0._4_4_,0x2c0a);
  }
  else {
LAB_0029d1d0:
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
  }
LAB_0029d04c:
  local_e0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_d0 + 4),(Result *)local_e0);
  FUN_002296c4(param_1,&local_d0);
  return;
}

