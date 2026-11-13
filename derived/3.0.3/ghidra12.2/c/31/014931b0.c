
/* WARNING: Removing unreachable block (ram,0x01493314) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014931b0(long *param_1,int *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bb2010;
  local_68 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  FUN_01a5033c(auStack_70,*param_1,*param_2,param_3,&local_68);
  uVar7 = FUN_0277e294(auStack_70);
  if ((uVar7 & 1) != 0) {
    iVar4 = *param_2;
    if (iVar4 == 0) {
      local_78 = 0;
      puVar1 = puVar1 + 0x10;
      local_88 = 0;
      local_98 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_90 = puVar1;
      puStack_80 = puVar1;
      FUN_0277f02c(auStack_70,&local_98);
      puVar6 = PTR_DAT_04bb27a8;
      iVar3 = (int)local_88 + (int)local_60;
      local_9c = local_88._4_4_ + local_60._4_4_;
      local_88 = CONCAT44(local_9c,iVar3);
      iVar4 = local_78._4_4_ + local_60._4_4_ + 1;
      local_78 = CONCAT44(local_78._4_4_ + local_60._4_4_,(int)local_78 + (int)local_60);
      local_a8 = puVar1;
      local_a0 = iVar3;
      if (iVar4 != local_9c) {
        do {
          lVar9 = *param_1;
          uVar7 = FUN_01a4f798(lVar9,1,&local_a8);
          if ((uVar7 & 1) != 0) {
            uVar5 = *(uint *)(lVar9 + 8);
            if (uVar5 == 0) {
LAB_014932cc:
              plVar8 = (long *)(*(long *)puVar6 + 0x1f8);
LAB_014932f4:
              lVar9 = *plVar8;
            }
            else {
              local_58 = uVar5;
              if (uVar5 != 0) {
                if (uVar5 == 0) goto LAB_014932cc;
                plVar2 = (long *)(*(long *)puVar6 + 0x30);
                plVar8 = plVar2 + uVar5;
                if (0x38 < uVar5) {
                  plVar8 = plVar2;
                }
                goto LAB_014932f4;
              }
              lVar9 = 0;
            }
            local_54 = 1;
            if (*(long *)(lVar9 + 0xe0) != 0) {
              FUN_012e5af4(*(long *)(lVar9 + 0xe0),&local_a8);
            }
          }
          FUN_014fbb00(*param_1,1,&local_a8);
          if (local_a0 < (int)local_78) {
            local_a0 = local_a0 + 1;
          }
          else {
            local_9c = local_9c + 1;
            local_a0 = (int)local_88;
          }
        } while ((iVar3 != local_a0) || (iVar4 != local_9c));
      }
      iVar4 = *param_2;
    }
    FUN_01a50cb0(*param_1,iVar4,&local_68);
    FUN_014fbb00(*param_1,*param_2,&local_68);
  }
  return;
}

