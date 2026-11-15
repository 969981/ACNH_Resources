
/* WARNING: Removing unreachable block (ram,0x0231ab84) */
/* WARNING: Removing unreachable block (ram,0x0231abe0) */

void FUN_0231aa48(long param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  undefined8 extraout_x1;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined8 local_58;
  char *pcStack_50;
  undefined4 local_44;
  
  switch(*(undefined4 *)(param_1 + 0x1810)) {
  case 2:
  case 3:
    pcStack_50 = "CommonSitWait";
    break;
  case 4:
    FUN_023ea384(param_1,param_2);
    return;
  case 5:
    pcStack_50 = "CommonSwimWait";
    break;
  case 6:
    pcStack_50 = "CommonDiveWait";
    break;
  case 7:
    pcStack_50 = "PlayerSWalkWait";
    break;
  default:
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    local_58._0_4_ = FUN_00a74b78(pbVar1);
    if ((int)local_58 == 4) {
      bVar7 = *(byte *)(param_1 + 0x18f4);
      local_44 = 2;
      bVar6 = *(byte *)(param_1 + 0x18f4) >> 2 & 1;
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      if (puVar8 == (undefined8 *)0x0) {
        local_58._0_4_ = 2;
        if ((DAT_052461c0 & 1) != 0) {
          puVar8 = &DAT_05240280;
          goto LAB_0231ac04;
        }
        iVar3 = __cxa_guard_acquire(&DAT_052461c0,extraout_x1,bVar6);
        lVar5 = DAT_052413b8;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          lVar5 = DAT_052413b8;
        }
      }
      else {
LAB_0231ac04:
        local_58._0_4_ = 2;
        lVar5 = puVar8[0x227];
      }
      if (((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) &&
         (plVar4 = *(long **)(*(long *)(lVar5 + 0x78) + 0x48), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_0548ff00,bVar6);
      }
      if ((bVar7 >> 3 & 1) != 0) {
LAB_0231ac34:
        pcStack_50 = "PlayerMenuWait";
        break;
      }
      lVar5 = *(long *)PTR_DAT_04bb39b0;
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0x15c);
        goto joined_r0x0231ab7c;
      }
    }
    else {
      lVar5 = *(long *)PTR_DAT_04bb39b0;
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0x15c);
joined_r0x0231ab7c:
        if (iVar3 != 0) {
          if (*(int *)(lVar5 + 0x15c) != 0) {
            pbVar2 = PTR_DAT_04bb32e0;
            if (*(int *)(lVar5 + 0x15c) != 0) {
              pbVar2 = (byte *)(lVar5 + 0x158);
            }
            bVar7 = *pbVar1;
            bVar6 = *pbVar2;
            if (7 < bVar6) {
              bVar6 = 0xff;
            }
            if (7 < bVar7) {
              bVar7 = 0xff;
            }
            if (bVar6 != bVar7) goto LAB_0231ad04;
          }
          iVar3 = FUN_0254a1e4(pbVar1);
          if (iVar3 == 1) {
            puVar8 = *(undefined8 **)(param_1 + 0x60);
            if (puVar8 == (undefined8 *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar3 = __cxa_guard_acquire(&DAT_052461c0);
                puVar8 = &DAT_05240280;
                if (iVar3 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                puVar8 = &DAT_05240280;
              }
            }
            if (((puVar8[0x227] != 0) && (lVar5 = *(long *)(puVar8[0x227] + 0x78), lVar5 != 0)) &&
               (plVar4 = *(long **)(lVar5 + 0x48), plVar4 != (long *)0x0)) {
              (**(code **)(*plVar4 + 0x28))(plVar4,&DAT_0548ff00,0);
            }
            goto LAB_0231ac34;
          }
        }
      }
    }
LAB_0231ad04:
    pcStack_50 = "PlayerWait";
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_2 + 0x10))(param_2,&local_58);
  return;
}

