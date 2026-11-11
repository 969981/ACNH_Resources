
void FUN_00440bf0(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  void *__dest;
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  void *local_90;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  long lStack_70;
  ulong local_68;
  void *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  ulong local_48;
  
  uVar2 = FUN_00428440(param_2[1]);
  switch(uVar2 & 0x1f) {
  case 0:
  case 1:
  case 6:
    break;
  case 2:
  case 4:
  case 5:
    FUN_00426f00(&local_60,param_2[1]);
    pvVar1 = local_60;
    if (local_60 == (void *)0x0) goto LAB_00440cd0;
    __dest = (void *)*param_2;
    iVar3 = FUN_00426fc0(param_2[1]);
    memcpy(__dest,pvVar1,(long)iVar3);
    local_68 = local_50;
    goto joined_r0x00440f44;
  case 3:
    FUN_00426f00(&local_60,param_2[1]);
    if (local_60 != (void *)0x0) {
      FUN_00441150(param_2,&local_60);
    }
LAB_00440cd0:
    local_68 = local_50;
    if ((local_50 & 1) == 0) {
      return;
    }
    goto LAB_00440cd8;
  case 7:
    lVar5 = param_2[1];
    if ((param_3 & 1) == 0) {
      FUN_00426f00(&local_60,lVar5);
      if (local_60 == (void *)0x0) {
        auVar6 = FUN_00428460(lVar5);
        puVar4 = auVar6._0_8_;
        if (puVar4 != auVar6._8_8_) {
          do {
            FUN_0043f280(&local_78,param_2,*puVar4);
            FUN_00440bf0(param_1,&local_78,1);
            if ((local_68 & 1) != 0) {
              FUN_0043dd50(local_68 & 0xfffffffffffffffe);
            }
            puVar4 = puVar4 + 1;
          } while (auVar6._8_8_ != puVar4);
        }
      }
      else {
        local_78 = (void *)*param_2;
        lStack_70 = lVar5;
        if (lVar5 == 0) {
          local_68 = 0;
        }
        else {
          local_68 = FUN_00428370(lVar5);
          if ((local_68 & 1) != 0) {
            FUN_0043dd30(local_68 & 0xfffffffffffffffe);
          }
        }
        FUN_00441150(&local_78,&local_60);
        if ((local_68 & 1) != 0) {
          FUN_0043dd50(local_68 & 0xfffffffffffffffe);
        }
      }
      if ((local_50 & 1) != 0) {
        FUN_0043dd50(local_50 & 0xfffffffffffffffe);
      }
      FUN_0044f1b0(lVar5);
    }
    else {
      do {
        FUN_00426f00(&local_60,lVar5);
        if (local_60 == (void *)0x0) {
          auVar6 = FUN_00428460(lVar5);
          puVar4 = auVar6._0_8_;
          if (puVar4 != auVar6._8_8_) {
            do {
              FUN_0043f280(&local_78,param_2,*puVar4);
              FUN_00440bf0(param_1,&local_78,1);
              if ((local_68 & 1) != 0) {
                FUN_0043dd50(local_68 & 0xfffffffffffffffe);
              }
              puVar4 = puVar4 + 1;
            } while (auVar6._8_8_ != puVar4);
          }
        }
        else {
          local_78 = (void *)*param_2;
          lStack_70 = lVar5;
          if (lVar5 == 0) {
            local_68 = 0;
          }
          else {
            local_68 = FUN_00428370(lVar5);
            if ((local_68 & 1) != 0) {
              FUN_0043dd30(local_68 & 0xfffffffffffffffe);
            }
          }
          FUN_00441150(&local_78,&local_60);
          if ((local_68 & 1) != 0) {
            FUN_0043dd50(local_68 & 0xfffffffffffffffe);
          }
        }
        if ((local_50 & 1) != 0) {
          FUN_0043dd50(local_50 & 0xfffffffffffffffe);
        }
        lVar5 = FUN_0044f1b0(lVar5);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
    }
    break;
  case 8:
    puVar4 = (undefined8 *)FUN_00426e90(param_2[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((int)((ulong)*puVar4 >> 8) < 1) {
      return;
    }
    FUN_00426f00(&local_78,param_2[1]);
    iVar3 = 0;
    if (local_78 == (void *)0x0) {
      do {
        puVar4 = (undefined8 *)FUN_00426e90(param_2[1],1);
        if (puVar4 == (undefined8 *)0x0) {
          if (-1 < iVar3) goto joined_r0x00440f44;
        }
        else if ((int)((ulong)*puVar4 >> 8) <= iVar3) goto joined_r0x00440f44;
        local_50 = 0;
        local_48 = 0;
        local_60 = (void *)0x0;
        puStack_58 = (undefined *)0x0;
        (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
                  ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_60);
        if (iVar3 < (int)local_50) {
          local_90 = (void *)((long)local_60 + (long)local_50._4_4_ * (long)iVar3);
          local_88 = puStack_58;
          local_80 = local_48;
          if ((local_48 & 1) != 0) {
            FUN_0043dd30(local_48 & 0xfffffffffffffffe);
          }
        }
        else {
          local_88 = (undefined *)0x0;
          local_80 = 0;
          local_90 = (void *)0x0;
        }
        if ((local_48 & 1) != 0) {
          FUN_0043dd50(local_48 & 0xfffffffffffffffe);
        }
        FUN_00440bf0(param_1,&local_90,1);
        if ((local_80 & 1) != 0) {
          FUN_0043dd50(local_80 & 0xfffffffffffffffe);
        }
        iVar3 = iVar3 + 1;
      } while( true );
    }
    pvVar1 = (void *)*param_2;
    iVar3 = FUN_00426fc0(param_2[1]);
    memcpy(pvVar1,local_78,(long)iVar3);
joined_r0x00440f44:
    if ((local_68 & 1) != 0) {
LAB_00440cd8:
      FUN_0043dd50(local_68 & 0xfffffffffffffffe);
    }
    break;
  default:
    local_50 = 0;
    local_60 = (void *)0x0;
    puStack_58 = &DAT_0413df78;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_60);
  }
  return;
}

