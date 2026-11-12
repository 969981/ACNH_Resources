
undefined8 FUN_009a7850(long param_1,ushort param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_48;
  uint local_40;
  undefined4 uStack_3c;
  long local_38;
  uint local_18;
  undefined4 local_14;
  
  iVar1 = *param_3;
  switch(iVar1) {
  case 100:
  case 0x65:
  case 0x66:
  case 0x69:
  case 0x89:
  case 0x9a:
  case 0x9b:
    local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
    puVar6 = (uint *)(param_1 + 0x3b270);
    if (0 < *(int *)(param_1 + 0x3b290)) {
      uVar7 = 0;
      do {
        if (uVar7 < *puVar6) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x3b278) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) goto LAB_009a7c3c;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x3b290));
    }
    break;
  case 0x6a:
    local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
    if (0 < *(int *)(param_1 + 0x7a8)) {
      uVar7 = 0;
      do {
        if (uVar7 < *(uint *)(param_1 + 0x788)) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x790) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) {
          if ((uint)uVar7 < *(uint *)(param_1 + 0x788)) {
            return *(undefined8 *)(*(long *)(param_1 + 0x790) + uVar7 * 8);
          }
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x7a8));
    }
    break;
  case 0x6b:
    local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
    puVar6 = (uint *)(param_1 + 0xb0840);
    if (0 < *(int *)(param_1 + 0xb0860)) {
      uVar7 = 0;
      do {
        if (uVar7 < *puVar6) {
          lVar4 = *(long *)(*(long *)(param_1 + 0xb0848) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) goto LAB_009a7c3c;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0xb0860));
    }
    break;
  case 0x6d:
    local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
    puVar6 = (uint *)(param_1 + 0x75d58);
    if (0 < *(int *)(param_1 + 0x75d78)) {
      uVar7 = 0;
      do {
        if (uVar7 < *puVar6) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x75d60) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) goto LAB_009a7c3c;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x75d78));
    }
    break;
  default:
    if (iVar1 == 1) {
      local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
      puVar6 = (uint *)(param_1 + 0xeb328);
      if (*(int *)(param_1 + 0xeb348) < 1) {
        return 0;
      }
      uVar7 = 0;
      while( true ) {
        if (uVar7 < *puVar6) {
          lVar4 = *(long *)(*(long *)(param_1 + 0xeb330) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) break;
        uVar7 = uVar7 + 1;
        if ((long)*(int *)(param_1 + 0xeb348) <= (long)uVar7) {
          return 0;
        }
      }
LAB_009a7c3c:
      if ((uint)uVar7 < *puVar6) {
        return *(undefined8 *)(*(long *)(puVar6 + 2) + uVar7 * 8);
      }
      return 0;
    }
    if (iVar1 == 2) {
      local_48 = (undefined **)CONCAT62(local_48._2_6_,param_2);
      puVar6 = (uint *)(param_1 + 0x125e10);
      if (*(int *)(param_1 + 0x125e30) < 1) {
        return 0;
      }
      uVar7 = 0;
      while( true ) {
        if (uVar7 < *puVar6) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x125e18) + uVar7 * 8);
        }
        else {
          lVar4 = 0;
        }
        uVar5 = (**(code **)(*(long *)(lVar4 + 0xd0) + 0x118))((long *)(lVar4 + 0xd0),&local_48);
        if ((uVar5 & 1) != 0) break;
        uVar7 = uVar7 + 1;
        if ((long)*(int *)(param_1 + 0x125e30) <= (long)uVar7) {
          return 0;
        }
      }
      goto LAB_009a7c3c;
    }
  case 0x67:
  case 0x68:
  case 0x6c:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
    local_18 = (uint)param_2;
    local_14 = 0;
    FUN_0277d4ac(&local_18);
    puVar2 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_18);
    lVar4 = *(long *)puVar2;
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_38 = 0;
        local_40 = local_18;
        uStack_3c = local_14;
        local_48 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_40);
        if (*(long *)puVar2 != 0) {
          lVar4 = *(long *)(lVar4 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar4 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(&local_18);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
               (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
              local_38 = lVar4;
            }
          }
        }
        FUN_01ad673c(&local_48);
      }
    }
  }
  return 0;
}

