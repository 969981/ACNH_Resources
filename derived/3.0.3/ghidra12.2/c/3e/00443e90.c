
/* WARNING: Removing unreachable block (ram,0x00443f18) */
/* WARNING: Removing unreachable block (ram,0x00443f20) */
/* WARNING: Removing unreachable block (ram,0x00443f44) */

void FUN_00443e90(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_0043c4e0(DAT_04c6f410);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar5 = *plVar2;
  if ((lVar5 != 0) && ((char)plVar2[4] != '\0')) {
    lVar1 = plVar2[2];
    lVar3 = FUN_0043c4e0(DAT_04c6f050);
    lVar4 = DAT_04c6f058;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    FUN_00421f90(*(undefined8 *)(lVar4 + 0x60),lVar5,1,(int)lVar1 - (int)lVar5);
  }
  *(undefined1 *)(plVar2 + 4) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  *(undefined1 *)(plVar2 + 4) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar4 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar5 = DAT_04c6f058;
  if (lVar4 != 0) {
    lVar5 = lVar4;
  }
  FUN_004220c0(*(undefined8 *)(lVar5 + 0x60),plVar2,0x30,1);
  FUN_0043c4a0(DAT_04c6f410,0);
  FUN_0043c4a0(DAT_04c6f412,0);
  return;
}

