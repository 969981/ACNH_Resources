
void FUN_004afb60(long *param_1,undefined8 *param_2,uint param_3,long param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong extraout_x1;
  long *plVar11;
  int iVar12;
  long lVar13;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  ulong local_140;
  ulong local_138;
  undefined *local_130;
  undefined8 local_128;
  ulong local_120;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  ulong local_70;
  
  uVar5 = FUN_00428440(param_2[1]);
  switch(uVar5 & 0x1f) {
  case 2:
    local_138 = local_138 & 0xffffffffffffff00;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    pcVar1 = "false";
    if ((char)local_138 != '\0') {
      pcVar1 = "true";
    }
    FUN_004b0420(param_1,param_3,"<bool value=\"%s\"/>",pcVar1);
    return;
  case 3:
    local_138 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    if (local_138 == 0) {
      FUN_004b0420(param_1,param_3,"<string/>");
    }
    else {
      FUN_004225d0(&local_138);
      FUN_00424200(&local_138,&DAT_0408a2b0,"&amp;",1);
      FUN_00424200(&local_138,&DAT_0409a096,&DAT_040f7eec,1);
      FUN_00424200(&local_138,&DAT_0407f901,&DAT_040a9bf5,1);
      FUN_00424200(&local_138,&DAT_040c7c06,"&quot;",1);
      FUN_00424200(&local_138,&DAT_0407fa97,"&apos;",1);
      FUN_004b0420(param_1,param_3,"<string value=\"%s\"/>",local_138);
      FUN_00422550(&local_138);
    }
    break;
  case 4:
    local_138 = 0;
    local_130 = (undefined *)((ulong)local_130 & 0xffffffffffffff00);
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    puVar10 = local_130;
    uVar9 = local_138;
    uVar7 = FUN_00427d00(param_2[1]);
    if ((uVar7 & 1) != 0) {
      uVar7 = -uVar9;
      if (((ulong)puVar10 & 0xff) == 0) {
        uVar7 = uVar9;
      }
      FUN_004b0420(param_1,param_3,"<integer value=\"%lld\"/>",uVar7);
      goto joined_r0x004afd14;
    }
    FUN_004b0420(param_1,param_3,"<integer value=\"%llu\"/>",uVar9);
    break;
  case 5:
    local_138 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    uVar9 = local_138;
    local_138 = 0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    FUN_004b0420(local_138,param_1,param_3,"<real dec=\"%lg\" hex=\"#%llx\"/>",uVar9);
joined_r0x004afd14:
    if (param_4 == 0) {
      return;
    }
    goto LAB_004afd18;
  case 6:
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_2);
    FUN_004b0420(param_1,param_3,"<pointer id=\"object%d\"/>",uVar6);
    return;
  case 7:
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    }
    lVar13 = *param_1;
    uVar8 = FUN_00427270(param_2[1]);
    FUN_004ae4c0(lVar13,"<record> <!-- %s -->",uVar8);
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    FUN_00427c30(&local_a0,param_2[1],0);
    do {
      if (local_a0 + 1 < local_98) {
        local_a0 = local_a0 + 1;
        uVar9 = FUN_004290b0();
      }
      else {
        uVar9 = FUN_00427c40(&local_a0);
        if ((uVar9 & 1) == 0) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
          FUN_004ae4c0(*param_1,"</record>");
          if ((param_3 & 1) == 0) {
            return;
          }
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
          FUN_004ae4c0(*param_1,&DAT_0407ebb1);
          return;
        }
        uVar9 = FUN_004290b0(local_a0);
      }
      if ((uVar9 & 0x30) != 0) {
        local_a8 = *local_a0;
        uVar9 = FUN_004290b0(&local_a8);
        if (((uVar9 & 1) == 0) && (lVar13 = FUN_00427b40(&local_a8), lVar13 != 0)) {
          uVar8 = FUN_00427b40(&local_a8);
          FUN_004225d0(&local_138,uVar8);
          FUN_00424200(&local_138,&DAT_0408a2b0,"&amp;",1);
          FUN_00424200(&local_138,&DAT_0409a096,&DAT_040f7eec,1);
          FUN_00424200(&local_138,&DAT_0407f901,&DAT_040a9bf5,1);
          FUN_00424200(&local_138,&DAT_040c7c06,"&quot;",1);
          FUN_00424200(&local_138,&DAT_0407fa97,"&apos;",1);
          FUN_004ae4c0(*param_1,"<field name=\"%s\">",local_138);
          FUN_0043f280(auStack_150,param_2,local_a8);
          FUN_00427bc0(&local_80,local_148,&DAT_04c15320);
          puVar3 = local_80;
          if ((local_70 & 1) != 0) {
            FUN_0043dd50(local_70 & 0xfffffffffffffffe);
          }
          FUN_004afb60(param_1,auStack_150,1,puVar3);
          if ((local_140 & 1) != 0) {
            FUN_0043dd50(local_140 & 0xfffffffffffffffe);
          }
          FUN_004ae400(*param_1,"</field>",local_138);
          FUN_00422550(&local_138);
        }
      }
    } while( true );
  case 8:
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    }
    plVar11 = (long *)param_1[2];
    local_128 = 0;
    local_120 = 0;
    local_138 = 0;
    local_130 = (undefined *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_138);
    puVar10 = local_130;
    if ((local_120 & 1) != 0) {
      FUN_0043dd50(local_120 & 0xfffffffffffffffe);
    }
    (**(code **)(*plVar11 + 0x20))(plVar11,puVar10);
    FUN_004225b0(&local_138);
    local_90 = 0;
    local_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
    puVar3 = local_98;
    if ((local_88 & 1) != 0) {
      FUN_0043dd50(local_88 & 0xfffffffffffffffe);
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar10 = &DAT_04085431;
    }
    else {
      puVar10 = (undefined *)FUN_00427570(puVar3,&local_138,0,0);
    }
    lVar13 = *param_1;
    local_90 = 0;
    local_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
    uVar9 = local_90;
    if ((local_88 & 1) != 0) {
      FUN_0043dd50(local_88 & 0xfffffffffffffffe);
    }
    FUN_004ae4c0(lVar13,"<array count=\"%d\" elementtypeid=\"type%d\"> <!-- ArrayOf %s -->",
                 uVar9 & 0xffffffff,extraout_x1 & 0xffffffff,puVar10);
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
    local_90 = 0;
    local_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
    puVar3 = local_98;
    if ((local_88 & 1) != 0) {
      FUN_0043dd50(local_88 & 0xfffffffffffffffe);
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_90 = 0;
      local_88 = 0;
      local_a0 = (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
      puVar3 = local_98;
      if ((local_88 & 1) != 0) {
        FUN_0043dd50(local_88 & 0xfffffffffffffffe);
      }
      FUN_00427bc0(&local_a0,puVar3,&DAT_04c15320);
      puVar3 = local_a0;
      if ((local_90 & 1) != 0) {
        FUN_0043dd50(local_90 & 0xfffffffffffffffe);
      }
      iVar12 = 0;
      while( true ) {
        local_90 = 0;
        local_88 = 0;
        local_a0 = (undefined8 *)0x0;
        local_98 = (undefined8 *)0x0;
        (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                  ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
        iVar4 = (int)local_90;
        if ((local_88 & 1) != 0) {
          FUN_0043dd50(local_88 & 0xfffffffffffffffe);
        }
        if (iVar4 <= iVar12) break;
        local_90 = 0;
        local_88 = 0;
        local_a0 = (undefined8 *)0x0;
        local_98 = (undefined8 *)0x0;
        (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                  ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_a0);
        if (iVar12 < (int)local_90) {
          local_80 = (undefined8 *)((long)local_a0 + (long)local_90._4_4_ * (long)iVar12);
          local_78 = local_98;
          local_70 = local_88;
          if ((local_88 & 1) != 0) {
            FUN_0043dd30(local_88 & 0xfffffffffffffffe);
          }
        }
        else {
          local_78 = (undefined8 *)0x0;
          local_70 = 0;
          local_80 = (undefined8 *)0x0;
        }
        if ((local_88 & 1) != 0) {
          FUN_0043dd50(local_88 & 0xfffffffffffffffe);
        }
        FUN_004afb60(param_1,&local_80,0,puVar3);
        if ((local_70 & 1) != 0) {
          FUN_0043dd50(local_70 & 0xfffffffffffffffe);
        }
        iVar12 = iVar12 + 1;
      }
    }
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_004ae4c0(*param_1,"</array>");
    if ((param_3 & 1) != 0) {
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
      FUN_004ae4c0(*param_1,&DAT_0407ebb1);
    }
    FUN_00422550(&local_138);
    return;
  default:
    local_128 = 0;
    local_138 = 0;
    local_130 = &DAT_0413df78;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_138);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x4b041c);
    (*pcVar2)();
  }
  if (param_4 != 0) {
LAB_004afd18:
    lVar13 = FUN_0044c7a0(param_4,param_2);
    if (lVar13 != 0) {
      FUN_004ae400(*param_1,"<!-- %s -->",lVar13);
    }
  }
  return;
}

