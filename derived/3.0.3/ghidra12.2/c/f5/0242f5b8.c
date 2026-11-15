
void FUN_0242f5b8(long param_1)

{
  char cVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1909);
  local_40 = 0xfffe;
  FUN_0277d4ac(&local_40);
  local_40 = *(undefined8 *)(param_1 + 0x1900);
  if (cVar1 != '\x01') goto LAB_0242f660;
  if (DAT_05739190 == 0) {
    lVar5 = 0;
    if (DAT_00000028 != '\0') goto LAB_0242f62c;
LAB_0242f654:
    bVar3 = 1;
  }
  else {
    lVar5 = *(long *)(DAT_05739190 + 0x28);
    if (*(char *)(lVar5 + 0x28) == '\0') goto LAB_0242f654;
LAB_0242f62c:
    bVar3 = (**(code **)(*(long *)(lVar5 + 0x20) + 0x18))((long *)(lVar5 + 0x20));
    *(undefined1 *)(lVar5 + 0x28) = 0;
  }
  *(byte *)(lVar5 + 0x29) = bVar3 & 1;
LAB_0242f660:
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  FUN_016e49e4(&local_38,&local_40,cVar1 == '\x01');
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_38);
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_026738b0(param_1 + 0x1ee8,&local_38,1,0);
    }
  }
  return;
}

