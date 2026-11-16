
void FUN_0284a220(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_70 = 0x9f2;
  FUN_0277d4ac(&local_70);
  puVar2 = PTR_DAT_04bb4e20;
  puVar1 = PTR_DAT_04bb46b0;
  iVar8 = 0;
  do {
    if ((*(long *)puVar1 == 0) || (lVar4 = FUN_026eec4c(*(long *)puVar1,iVar8), lVar4 == 0)) {
      uVar3 = *(uint *)puVar2;
    }
    else {
      uVar3 = FUN_0284a3d0(lVar4,lVar4);
    }
    if (((uVar3 < 0x28) && (*(long *)puVar1 != 0)) &&
       (lVar4 = FUN_026eec4c(*(long *)puVar1,iVar8), lVar4 != 0)) {
      lVar9 = lVar4 + 0x194b0;
      if (*(long *)(lVar4 + 0x194b8) == 0) {
        lVar9 = *(long *)(*(long *)puVar1 + 0x20);
        lVar4 = *(long *)(lVar9 + 0x98);
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x19548);
      }
      if (lVar4 == 0) {
        FUN_027fa2dc(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78),uVar3,&local_70,0);
      }
      else {
        if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
          uVar5 = 0;
          plVar6 = *(long **)(lVar4 + 0x20);
joined_r0x0284a3a0:
          if (plVar6 != (long *)0x0) {
            local_68 = *(undefined8 *)(lVar9 + 0x78);
            uStack_60 = *(undefined8 *)(lVar9 + 0x80);
            local_58 = 0x17c;
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_68);
          }
        }
        else {
          uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
          uVar5 = uVar5 & 0xffffffff;
          if (*(long *)(lVar9 + 0x98) != 0) {
            plVar6 = *(long **)(*(long *)(lVar9 + 0x98) + 0x20);
            goto joined_r0x0284a3a0;
          }
        }
        FUN_027fa2dc(*(long *)(lVar9 + 0x80) + *(long *)(lVar9 + 0x78),uVar3,&local_70,0);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar9 + 0x98) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x98) + 0x18), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 8) {
      return;
    }
  } while( true );
}

