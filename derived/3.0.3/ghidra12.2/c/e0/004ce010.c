
undefined8 * FUN_004ce010(long param_1,uint param_2,long param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((param_2 >> 4 & 1) != 0) {
    if ((param_3 == 0) && ((param_2 & 0xffffffef) == 9)) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),0x40,0);
      FUN_00453d10(puVar4,0,0x18,8,*(undefined8 *)(param_1 + 0xb0),"hkVariantArray",0);
      return puVar4;
    }
    uVar3 = FUN_004ce010(param_1,param_2 & 0xffffffef,param_3,0);
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),0x78,0);
    FUN_00453d40(puVar4,uVar3,0x10,8,*(undefined8 *)(param_1 + 0xa0),"hkArray",0);
    return puVar4;
  }
  if ((param_2 >> 5 & 1) != 0) {
    uVar3 = FUN_004ce010(param_1,param_2 & 0xffffffdf,param_3,0);
    plVar6 = *(long **)(param_1 + 0x68);
    iVar1 = FUN_00426fc0();
    uVar2 = FUN_00427030(uVar3);
    puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x68,0);
    FUN_00453e60(puVar4,uVar3,param_4,iVar1 * param_4,uVar2,PTR_DAT_04bd50f0,&DAT_0408562c,0);
    return puVar4;
  }
  puVar4 = (undefined8 *)PTR_DAT_04bd4fb0;
  switch(param_2) {
  case 1:
    break;
  case 2:
    puVar4 = (undefined8 *)PTR_DAT_04bd4ff0;
    break;
  case 3:
    puVar4 = (undefined8 *)PTR_DAT_04bd4fa8;
    if (*(char *)(param_1 + 4) != '\0') {
      puVar4 = (undefined8 *)PTR_DAT_04bd4fa0;
    }
    return puVar4;
  case 4:
    puVar5 = (undefined8 *)PTR_DAT_04bd5cf0;
    puVar4 = (undefined8 *)PTR_DAT_04bd5d10;
    goto LAB_004ce208;
  case 5:
    puVar5 = (undefined8 *)PTR_DAT_04bd5cf8;
    puVar4 = (undefined8 *)PTR_DAT_04bd5d18;
    goto LAB_004ce208;
  case 6:
    puVar5 = (undefined8 *)PTR_DAT_04bd5d00;
    puVar4 = (undefined8 *)PTR_DAT_04bd5d20;
    goto LAB_004ce208;
  case 7:
    puVar5 = (undefined8 *)PTR_DAT_04bd5d08;
    puVar4 = (undefined8 *)PTR_DAT_04bd5d28;
LAB_004ce208:
    if (*(char *)(param_1 + 4) != '\0') {
      puVar4 = puVar5;
    }
    break;
  case 8:
    if (param_3 == 0) {
      puVar5 = (undefined8 *)PTR_DAT_04bd8010;
    }
    else {
      puVar5 = (undefined8 *)FUN_004714d0(param_1 + 0x28,param_3,0);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00422030(*(undefined8 *)(param_1 + 0x68),0x40,1);
        FUN_0043a810(puVar5,0,0x40);
        *puVar5 = 0x90001d;
        puVar5[1] = 0;
        puVar5[2] = 7;
        FUN_00471240(param_1 + 0x28,param_3,puVar5);
      }
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x68) + 0x10))(*(long **)(param_1 + 0x68),0x70,0);
    FUN_00453c80(puVar4,puVar5,&DAT_040f28c8,0);
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
    puVar5 = (undefined8 *)FUN_00426d40(puVar4,4);
    *puVar5 = uVar3;
    break;
  case 9:
    if (param_3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)FUN_004714d0(param_1 + 0x28,param_3,0);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00422030(*(undefined8 *)(param_1 + 0x68),0x40,1);
        FUN_0043a810(puVar4,0,0x40);
        *puVar4 = 0x90001d;
        puVar4[1] = 0;
        puVar4[2] = 7;
        FUN_00471240(param_1 + 0x28,param_3,puVar4);
      }
    }
    break;
  case 10:
    puVar4 = (undefined8 *)PTR_DAT_04bd4f78;
    break;
  default:
    puVar4 = (undefined8 *)PTR_DAT_04bd4fe8;
  }
  return puVar4;
}

