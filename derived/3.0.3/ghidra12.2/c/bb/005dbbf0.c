
void FUN_005dbbf0(undefined8 param_1,long param_2,uint param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong local_68;
  
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a00(lVar3,"TtIterate Collidables");
  }
  if (0 < *(int *)(param_2 + 0x188)) {
    uVar1 = (param_4 ^ 1) & param_3;
    lVar6 = (long)*(int *)(*(long *)(param_2 + 0x18) + 0xd8);
    lVar3 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(long *)(param_2 + 400) + lVar3;
      if (*(char *)(lVar5 + 0x9f) != '\0') {
        uVar2 = param_4;
        if (*(char *)(lVar5 + 0x9d) != '\0') {
          uVar2 = param_3;
        }
        if ((uVar2 & 1) == 0) goto LAB_005dbfb8;
        if ((param_5 & 1) != 0) {
          if (*(int *)(*(long *)(lVar5 + 0x88) + 0x18) == 10) {
            if ((*(byte *)(param_2 + 0x26c) >> 2 & 1) != 0) {
              uVar8 = 2;
              lVar4 = FUN_0043c4e0(DAT_04c6f410);
              goto joined_r0x005dbf18;
            }
          }
          else if (*(char *)(lVar5 + 0x9e) != '\0') {
            uVar2 = *(uint *)(param_2 + 0x26c);
            if (lVar6 <= (long)uVar7) {
              uVar2 = uVar2 >> 1;
            }
            if ((uVar2 & 1) != 0) {
              uVar8 = 1;
              lVar4 = FUN_0043c4e0(DAT_04c6f410);
              goto joined_r0x005dbf18;
            }
          }
          goto LAB_005dbfb8;
        }
        uVar8 = 0;
        lVar4 = FUN_0043c4e0(DAT_04c6f410);
joined_r0x005dbf18:
        if ((lVar4 != 0) && (*(ulong *)(lVar4 + 8) < *(ulong *)(lVar4 + 0x18))) {
          if (*(ulong *)(lVar5 + 0x90) < 2) {
            FUN_0043bce0(&local_68,"Unnamed Collidables",0xffffffff);
          }
          else {
            FUN_0043bd50(&local_68);
          }
          FUN_00443ad0(lVar4,local_68 & 0xfffffffffffffffe,&DAT_040c919e);
          FUN_0043be10(&local_68);
        }
        switch(*(undefined4 *)(*(long *)(lVar5 + 0x88) + 0x18)) {
        case 0:
          FUN_005e5640(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
        default:
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 1:
          FUN_005e3c30(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          if (lVar5 == 0) goto LAB_005dbfb8;
          goto LAB_005dbfac;
        case 2:
          FUN_005dc4a0(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 3:
          FUN_005de290(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 5:
          FUN_005e00c0(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 9:
          FUN_005e1ee0(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 10:
          FUN_005e7240(param_1,uVar7 & 0xffffffff,0,param_2,*(char *)(lVar5 + 0x9d) != '\0',
                       uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
          break;
        case 0xb:
          FUN_005e8c60(param_1,uVar7 & 0xffffffff,lVar6 <= (long)uVar7,param_2,
                       *(char *)(lVar5 + 0x9d) != '\0',uVar1 & 1,uVar8);
          lVar5 = FUN_0043c4e0(DAT_04c6f410);
        }
        if (lVar5 != 0) {
LAB_005dbfac:
          FUN_00443a70(lVar5,&DAT_04085310);
        }
      }
LAB_005dbfb8:
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + 0xa0;
    } while ((long)uVar7 < (long)*(int *)(param_2 + 0x188));
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443a70(lVar3,&DAT_04085310);
  }
  return;
}

