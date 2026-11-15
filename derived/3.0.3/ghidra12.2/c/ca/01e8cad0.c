
void FUN_01e8cad0(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  undefined8 local_50;
  int local_48;
  int local_44;
  
  if (*(char *)(param_1 + 0xb360) == '\0') {
    iVar5 = *(int *)(param_1 + 0xaf50);
    lVar9 = *(long *)PTR_DAT_04bb3968;
    piVar6 = (int *)(**(code **)(*(long *)(lVar9 + 0x1608) + 0xf0))(lVar9 + 0x1608);
    if (iVar5 < *piVar6) {
      cVar8 = '\x02';
    }
    else {
      iVar5 = *(int *)(param_1 + 0xaf50);
      piVar6 = (int *)(**(code **)(*(long *)(lVar9 + 0x15d8) + 0xf0))(lVar9 + 0x15d8);
      cVar8 = iVar5 < *piVar6;
    }
    if (cVar8 == '\x02') {
      lVar9 = *(long *)(param_1 + 0x18);
      piVar6 = (int *)(lVar9 + 0x10);
      piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
      if (4 < *(uint *)(lVar9 + 0x294)) {
        piVar3 = piVar6;
      }
      local_50 = CONCAT44(local_50._4_4_,*piVar3);
      if ((*piVar3 != 1) && (uVar7 = FUN_02085a50(lVar9,1,0), (uVar7 & 1) != 0)) {
        *(undefined1 *)(lVar9 + 0x801) = 1;
        piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
        if (4 < *(uint *)(lVar9 + 0x294)) {
          piVar3 = piVar6;
        }
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
      }
    }
    else if (cVar8 == '\x01') {
      local_48 = 0;
      local_50 = 0;
      FUN_01e9c830(param_1,&local_50,param_2,param_3 & 1);
      lVar9 = *(long *)(param_1 + 0x18);
      piVar6 = (int *)(lVar9 + 0x10);
      piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
      if (4 < *(uint *)(lVar9 + 0x294)) {
        piVar3 = piVar6;
      }
      local_44 = *piVar3;
      if (local_44 == 2) {
      }
      else {
        uVar7 = FUN_02085a50(lVar9,2,0);
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)(lVar9 + 0x801) = 1;
          piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
          if (4 < *(uint *)(lVar9 + 0x294)) {
            piVar3 = piVar6;
          }
          piVar3[3] = (int)local_50;
          piVar3[4] = local_50._4_4_;
          piVar3[5] = local_48;
        }
      }
      lVar9 = *(long *)(param_1 + 0x18) + 0x10;
      uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0x294);
      lVar1 = lVar9 + (ulong)uVar4 * 0x80;
      if (4 < uVar4) {
        lVar1 = lVar9;
      }
      *(int *)(lVar1 + 0xc) = (int)local_50;
      *(int *)(lVar1 + 0x10) = local_50._4_4_;
      *(int *)(lVar1 + 0x14) = local_48;
    }
    else if (cVar8 == '\0') {
      local_48 = 0;
      local_50 = 0;
      iVar5 = FUN_01e9c830(param_1,&local_50,param_2,param_3 & 1);
      lVar9 = *(long *)(param_1 + 0x18);
      if (iVar5 == 0) {
        uVar7 = FUN_02085a50(lVar9,3,0);
        if ((uVar7 & 1) != 0) {
          lVar1 = lVar9 + 0x10;
          *(undefined1 *)(lVar9 + 0x801) = 1;
          lVar2 = lVar1 + (ulong)*(uint *)(lVar9 + 0x294) * 0x80;
          if (4 < *(uint *)(lVar9 + 0x294)) {
            lVar2 = lVar1;
          }
          *(int *)(lVar2 + 0x14) = local_48;
          *(undefined8 *)(lVar2 + 0xc) = local_50;
          lVar2 = lVar1 + (ulong)*(uint *)(lVar9 + 0x294) * 0x80;
          if (4 < *(uint *)(lVar9 + 0x294)) {
            lVar2 = lVar1;
          }
          *(undefined1 *)(lVar2 + 0x7e) = 1;
        }
      }
      else {
        piVar6 = (int *)(lVar9 + 0x10);
        piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
        if (4 < *(uint *)(lVar9 + 0x294)) {
          piVar3 = piVar6;
        }
        local_44 = *piVar3;
        if (local_44 == 1) {
        }
        else {
          uVar7 = FUN_02085a50(lVar9,1,0);
          if ((uVar7 & 1) != 0) {
            *(undefined1 *)(lVar9 + 0x801) = 1;
            piVar3 = piVar6 + (ulong)*(uint *)(lVar9 + 0x294) * 0x20;
            if (4 < *(uint *)(lVar9 + 0x294)) {
              piVar3 = piVar6;
            }
            piVar3[3] = (int)local_50;
            piVar3[4] = local_50._4_4_;
            piVar3[5] = local_48;
          }
        }
        uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0x294);
        lVar9 = *(long *)(param_1 + 0x18) + 0x10;
        lVar1 = lVar9 + (ulong)uVar4 * 0x80;
        if (4 < uVar4) {
          lVar1 = lVar9;
        }
        *(int *)(lVar1 + 0xc) = (int)local_50;
        *(int *)(lVar1 + 0x14) = local_48;
        *(int *)(lVar1 + 0x10) = local_50._4_4_;
      }
    }
  }
  return;
}

