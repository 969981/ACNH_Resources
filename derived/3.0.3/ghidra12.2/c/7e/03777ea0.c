
/* WARNING: Removing unreachable block (ram,0x03777ee8) */

undefined8 FUN_03777ea0(uint *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 == 0) {
    lVar5 = 0;
    lVar1 = lRam0000000000000060;
    if (lRam0000000000000060 != 0) goto LAB_03777f3c;
LAB_03777f1c:
    uVar2 = 0;
  }
  else {
    local_48 = CONCAT44(local_48._4_4_,1);
    if (((*(byte *)(lVar5 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar1 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar1 = 0;
    }
    lVar5 = 0;
    if (lVar1 != 0) {
      lVar5 = lVar1 + 0xa8;
    }
    lVar1 = *(long *)(lVar5 + 0x60);
    if (*(long *)(lVar5 + 0x60) == 0) goto LAB_03777f1c;
LAB_03777f3c:
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar1 + 0x20);
joined_r0x03778058:
      if (plVar3 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar5 + 0x40);
        uStack_40 = *(undefined8 *)(lVar5 + 0x48);
        local_38 = 0x20;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar5 + 0x60) != 0) {
        plVar3 = *(long **)(*(long *)(lVar5 + 0x60) + 0x20);
        goto joined_r0x03778058;
      }
    }
  }
  if (((*param_1 == 0) || (*param_1 == 1)) || (*param_1 == 2)) {
    if (*param_1 != 0) {
      if (*param_1 == 1) {
        param_2 = param_2 + 9;
      }
      else {
        if (*param_1 != 2) {
          uVar8 = 0;
          goto joined_r0x03778064;
        }
        param_2 = param_2 + 0xf;
      }
    }
    if (*param_1 < 3) {
      lVar1 = (long)(int)*param_1 * 4;
      iVar6 = *(int *)(&DAT_04199078 + lVar1);
      iVar7 = *(int *)(&DAT_04199084 + lVar1);
    }
    else {
      iVar6 = 0;
      iVar7 = 0;
    }
    uVar8 = 0;
    if (((int)param_2 < iVar6) || (iVar7 <= (int)param_2)) goto joined_r0x03778064;
    *(undefined2 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40) + (ulong)param_2 * 2) = 0xffff
    ;
  }
  uVar8 = 1;
joined_r0x03778064:
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x60) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x60) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return uVar8;
}

