
void FUN_01f57570(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *__src;
  long lVar3;
  char *__dest;
  undefined *__dest_00;
  
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x80000000000;
  iVar1 = *(int *)(param_1 + 0x77f4);
  if (((((iVar1 != 0x29) && (iVar1 != 0x1e)) && (uVar2 = *(uint *)(param_1 + 0x77b0), uVar2 != 0x29)
       ) && ((iVar1 != 0x58 && (uVar2 != 0x1e)))) &&
     ((iVar1 != 0x59 && (((uVar2 & 0xfffffffe) != 0x58 && (*(int *)(DAT_052cc470 + 0x624) != 0))))))
  {
    __dest = *(char **)(param_1 + 0x8208);
    if (__dest != "NNPC_Talk_Sequence") {
      iVar1 = 0x12;
      if (*(int *)(param_1 + 0x8210) < 0x13) {
        iVar1 = *(int *)(param_1 + 0x8210) + -1;
      }
      memcpy(__dest,"NNPC_Talk_Sequence",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    __dest_00 = *(undefined **)(param_1 + 0x8260);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    __src = PTR_DAT_04c4b988;
    if (__dest_00 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar3 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar3] == '\0') goto LAB_01f576dc;
        if (PTR_DAT_04c4b988[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01f576dc;
        }
        if (PTR_DAT_04c4b988[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01f576dc;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01f576dc:
      iVar1 = (int)lVar3;
      if (*(int *)(param_1 + 0x8268) <= (int)lVar3) {
        iVar1 = *(int *)(param_1 + 0x8268) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar1);
      __dest_00[iVar1] = 0;
    }
    *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 3;
    *(undefined1 *)(param_1 + 0x13712) = 1;
  }
  return;
}

