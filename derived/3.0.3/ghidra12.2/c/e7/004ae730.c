
void FUN_004ae730(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *local_a0;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  long local_80;
  ulong local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  ulong local_58;
  
  lVar7 = param_2[1];
  uVar3 = FUN_00428440(lVar7);
  if (((lVar7 != 0) && ((uVar3 & 0x1f) == 7)) ||
     ((lVar7 = param_2[1], uVar3 = FUN_00428440(lVar7), lVar7 != 0 && ((uVar3 & 0x1f) == 8)))) {
    puVar4 = (undefined8 *)FUN_00426e90(param_2[1],0x2000);
    if (puVar4 == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (undefined4)*puVar4;
    }
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar6);
    lVar7 = FUN_00445c70(param_1 + 0x28,&local_70);
    if ((lVar7 != 0) &&
       (-1 < (int)(*(uint *)(lVar7 + 4) |
                  ((int)lVar7 - (int)*(undefined8 *)(param_1 + 0x38)) * 0x20000000))) {
      local_80 = 0;
      local_78 = 0;
      local_88 = 0;
      if ((param_2[1] != 0) && (uVar3 = FUN_00428440(), (uVar3 & 0x1f) == 7)) {
        local_88 = *param_2;
        local_80 = param_2[1];
        if ((param_2[2] & 1U) != 0) {
          FUN_0043dd30(param_2[2] & 0xfffffffffffffffe);
        }
        if ((local_78 & 1) != 0) {
          FUN_0043dd50(local_78 & 0xfffffffffffffffe);
        }
        local_78 = param_2[2];
      }
      if (local_88 != 0) {
        FUN_00427c30(&local_70,local_80,0);
LAB_004ae84c:
        if (local_70 + 1 < local_68) {
          local_70 = local_70 + 1;
          uVar3 = FUN_004290b0();
        }
        else {
          uVar3 = FUN_00427c40(&local_70);
          if ((uVar3 & 1) == 0) goto LAB_004aea78;
          uVar3 = FUN_004290b0(local_70);
        }
        if ((uVar3 & 0x30) != 0) {
          FUN_0043f280(&local_a0,&local_88,*local_70);
          FUN_004ae730(param_1,&local_a0);
          if ((local_90 & 1) != 0) {
            FUN_0043dd50(local_90 & 0xfffffffffffffffe);
          }
        }
        goto LAB_004ae84c;
      }
      if ((param_2[1] != 0) && (uVar3 = FUN_00428440(), (uVar3 & 0x1f) == 8)) {
        lVar7 = *param_2;
        lVar1 = param_2[1];
        uVar3 = param_2[2];
        if ((uVar3 & 1) != 0) {
          FUN_0043dd30(uVar3 & 0xfffffffffffffffe);
          uVar3 = param_2[2];
        }
        if (lVar7 != 0) {
          lVar5 = FUN_00426d90(lVar1);
          if (lVar5 == 0) {
            plVar9 = *(long **)(param_1 + 0x20);
            local_60 = 0;
            local_58 = 0;
            local_70 = (undefined8 *)0x0;
            local_68 = (undefined8 *)0x0;
            (**(code **)(*(long *)(uVar3 & 0xfffffffffffffffe) + 0x50))
                      ((long *)(uVar3 & 0xfffffffffffffffe),lVar7,lVar1,&local_70);
            puVar4 = local_68;
            if ((local_58 & 1) != 0) {
              FUN_0043dd50(local_58 & 0xfffffffffffffffe);
            }
            (**(code **)(*plVar9 + 0x20))(plVar9,puVar4);
          }
          plVar9 = (long *)(uVar3 & 0xfffffffffffffffe);
          iVar8 = 0;
          while( true ) {
            local_60 = 0;
            local_58 = 0;
            local_70 = (undefined8 *)0x0;
            local_68 = (undefined8 *)0x0;
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar7,lVar1,&local_70);
            iVar2 = (int)local_60;
            if ((local_58 & 1) != 0) {
              FUN_0043dd50(local_58 & 0xfffffffffffffffe);
            }
            if (iVar2 <= iVar8) break;
            local_60 = 0;
            local_58 = 0;
            local_70 = (undefined8 *)0x0;
            local_68 = (undefined8 *)0x0;
            (**(code **)(*plVar9 + 0x50))(plVar9,lVar7,lVar1,&local_70);
            uVar10 = local_58;
            if (iVar8 < (int)local_60) {
              local_a0 = (undefined8 *)((long)local_70 + (long)local_60._4_4_ * (long)iVar8);
              local_98 = local_68;
              local_90 = local_58;
              if ((local_58 & 1) != 0) {
                FUN_0043dd30(local_58 & 0xfffffffffffffffe);
                goto joined_r0x004aea30;
              }
              if ((local_58 & 1) != 0) goto LAB_004aea48;
LAB_004aea0c:
              FUN_004ae730(param_1,&local_a0);
            }
            else {
              uVar10 = 0;
              local_98 = 0;
              local_90 = 0;
              local_a0 = (undefined8 *)0x0;
joined_r0x004aea30:
              if ((local_58 & 1) == 0) goto LAB_004aea0c;
LAB_004aea48:
              FUN_0043dd50(local_58 & 0xfffffffffffffffe);
              FUN_004ae730(param_1,&local_a0);
            }
            if ((uVar10 & 1) != 0) {
              FUN_0043dd50(uVar10 & 0xfffffffffffffffe);
            }
            iVar8 = iVar8 + 1;
          }
        }
        if ((uVar3 & 1) != 0) {
          FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
        }
      }
LAB_004aea78:
      if ((local_78 & 1) != 0) {
        FUN_0043dd50(local_78 & 0xfffffffffffffffe);
      }
    }
  }
  return;
}

