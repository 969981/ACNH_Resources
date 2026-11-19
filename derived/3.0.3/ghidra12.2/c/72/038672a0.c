
void FUN_038672a0(long param_1)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_40;
  undefined4 local_38;
  
  bVar2 = *(byte *)(param_1 + 0x220);
  if (bVar2 != 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      if (((bVar2 & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x218), lVar5 != 0)) {
        local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
        puVar3 = local_40;
        local_40._0_4_ = 1;
        *(undefined4 *)(lVar5 + 0x2c) = 1;
        iVar4 = (int)local_40;
        local_40 = puVar3;
        while (iVar4 != -0x80000000) {
          if (*(char *)(lVar5 + 0x20) == '\0') {
            FUN_03c83a50(lVar5,1);
          }
          FUN_03c835a0(lVar5);
          iVar4 = *(int *)(lVar5 + 0x2c);
        }
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x218);
      if (lVar5 != 0) {
        local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
        *(undefined4 *)(lVar5 + 0x2c) = 0;
        iVar4 = 0;
        while (iVar4 != -0x80000000) {
          if (*(char *)(lVar5 + 0x20) == '\0') {
            FUN_03c83a50(lVar5,1);
          }
          FUN_03c835a0(lVar5);
          iVar4 = *(int *)(lVar5 + 0x2c);
        }
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x218);
  if (lVar5 != 0) {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      iVar4 = *(int *)(lVar5 + 0x28);
    }
    else {
      piVar1 = (int *)(lVar5 + 0x24);
      if (*(char *)(lVar5 + 0x21) != '\0') {
        piVar1 = (int *)(lVar5 + 0x28);
      }
      iVar4 = *piVar1;
    }
    if (iVar4 != 0) {
      uVar6 = 0;
      plVar7 = *(long **)(param_1 + 0x208);
      goto joined_r0x038673c0;
    }
  }
  uVar6 = 1;
  plVar7 = *(long **)(param_1 + 0x200);
joined_r0x038673c0:
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 1;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
    (**(code **)(plVar7[3] + 400))(0x3f800000,plVar7[1]);
  }
  FUN_03867430(param_1,uVar6);
  return;
}

