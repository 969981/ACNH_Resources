
/* WARNING: Removing unreachable block (ram,0x032ef914) */
/* WARNING: Removing unreachable block (ram,0x032ef8cc) */
/* WARNING: Removing unreachable block (ram,0x032ef874) */
/* WARNING: Removing unreachable block (ram,0x032ef820) */
/* WARNING: Removing unreachable block (ram,0x032ef688) */
/* WARNING: Removing unreachable block (ram,0x032ef640) */
/* WARNING: Removing unreachable block (ram,0x032ef658) */
/* WARNING: Removing unreachable block (ram,0x032ef5f8) */
/* WARNING: Removing unreachable block (ram,0x032ef784) */
/* WARNING: Removing unreachable block (ram,0x032ef6f0) */
/* WARNING: Removing unreachable block (ram,0x032ef73c) */
/* WARNING: Removing unreachable block (ram,0x032ef708) */
/* WARNING: Removing unreachable block (ram,0x032ef754) */
/* WARNING: Removing unreachable block (ram,0x032ef7d0) */
/* WARNING: Removing unreachable block (ram,0x032ef7e8) */
/* WARNING: Removing unreachable block (ram,0x032ef610) */
/* WARNING: Removing unreachable block (ram,0x032ef83c) */
/* WARNING: Removing unreachable block (ram,0x032ef890) */
/* WARNING: Removing unreachable block (ram,0x032ef8e4) */
/* WARNING: Removing unreachable block (ram,0x032ef92c) */
/* WARNING: Removing unreachable block (ram,0x032ef79c) */
/* WARNING: Removing unreachable block (ram,0x032ef6a0) */

undefined8 FUN_032ef500(long param_1,long param_2,char param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04bc96a8;
  if (param_2 == 0) {
    return 0x8001;
  }
  if (param_3 == -1) {
    return 0x801b;
  }
  if (*(char *)(param_2 + 0x70380) == param_3) {
    lVar4 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    plVar2 = (long *)(param_2 + 0x70f68);
    do {
      if ((char)plVar2[9] == '\x03') {
        lVar5 = *plVar2;
        if (lVar5 != 0) {
          if ((*(long *)(lVar5 + 8) != 0) && (**(long **)puVar1 != 0)) {
            (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
            lVar5 = *plVar2;
          }
          *(undefined8 *)(lVar5 + 8) = 0;
          if (plVar2[8] != 0) {
            if (**(long **)puVar1 != 0) {
              (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
            }
            plVar2[8] = 0;
          }
          if (plVar2[4] != 0) {
            if (**(long **)puVar1 != 0) {
              (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
            }
            plVar2[4] = 0;
          }
          plVar6 = plVar2 + 5;
          if (*plVar6 != 0) goto LAB_032ef7c0;
        }
      }
      else if (((char)plVar2[9] == '\0') && (*plVar2 != 0)) {
        if (((int)lVar4 != (int)*(short *)(param_2 + 0x78ebc)) && (**(long **)puVar1 != 0)) {
          (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
        }
        *plVar2 = 0;
        if (plVar2[8] != 0) {
          if (**(long **)puVar1 != 0) {
            (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
          }
          plVar2[8] = 0;
        }
        if (plVar2[4] != 0) {
          if (**(long **)puVar1 != 0) {
            (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
          }
          plVar2[4] = 0;
        }
        if (plVar2[5] != 0) {
          plVar6 = (long *)(param_2 + 0x70f68) + lVar4 * 10 + 5;
LAB_032ef7c0:
          if (**(long **)puVar1 != 0) {
            (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
          }
          *plVar6 = 0;
        }
      }
      lVar4 = lVar4 + 1;
      *(undefined1 *)(plVar2 + 9) = 0;
      plVar2[8] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
      plVar2 = plVar2 + 10;
    } while (lVar4 != 0x14);
    lVar4 = *(long *)(param_2 + 0x715a8);
    if ((lVar4 != 0) && (**(long **)puVar1 != 0)) {
      plVar2 = (long *)**(long **)puVar1;
      (**(code **)(*plVar2 + 0x38))(plVar2,lVar4);
    }
    lVar5 = *(long *)(param_2 + 0x715b0);
    *(undefined8 *)(param_2 + 0x715a8) = 0;
    if ((lVar5 != 0) && (lVar4 != lVar5)) {
      if (**(long **)puVar1 != 0) {
        plVar2 = (long *)**(long **)puVar1;
        (**(code **)(*plVar2 + 0x38))(plVar2,lVar5);
      }
      lVar4 = lVar5;
    }
    *(undefined8 *)(param_2 + 0x715b0) = 0;
    if (((*(long *)(param_2 + 0x715b8) != 0) && (lVar4 != *(long *)(param_2 + 0x715b8))) &&
       (**(long **)puVar1 != 0)) {
      (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
    }
    *(undefined8 *)(param_2 + 0x715b8) = 0;
    if ((*(long *)(param_2 + 0x874b0) != 0) && (**(long **)puVar1 != 0)) {
      (**(code **)(*(long *)**(long **)puVar1 + 0x38))();
    }
    uVar3 = 0;
    *(long *)(param_2 + 0x874b0) = 0;
    *(undefined4 *)(param_2 + 0x78eb8) = 0xffffffff;
    *(undefined2 *)(param_2 + 0x78ebc) = 0xffff;
    *(char *)(param_2 + 0x70380) = -1;
    *(undefined4 *)(param_2 + 0x78ed8) = 0;
    *(undefined8 *)(param_2 + 0x78ec8) = 0;
    *(undefined8 *)(param_2 + 0x78ed0) = 0;
    *(undefined1 *)(param_2 + 0xb52ca) = 0xff;
  }
  else {
    uVar3 = 0x801b;
  }
  return uVar3;
}

