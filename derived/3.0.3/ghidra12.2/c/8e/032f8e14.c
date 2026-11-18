
/* WARNING: Removing unreachable block (ram,0x032f8f28) */
/* WARNING: Removing unreachable block (ram,0x032f8eb4) */
/* WARNING: Removing unreachable block (ram,0x032f8ed8) */
/* WARNING: Removing unreachable block (ram,0x032f8f44) */

uint FUN_032f8e14(char *param_1,undefined8 *param_2)

{
  int iVar1;
  void *__s;
  uint uVar2;
  ulong __n;
  undefined8 local_48;
  uint local_28 [2];
  
  uVar2 = 0xffff8002;
  if ((param_1 != (char *)0x0) && (param_2 != (undefined8 *)0x0)) {
    iVar1 = nn::fs::OpenFile((FileHandle *)&local_48,param_1,1);
    if (iVar1 == 0) {
      iVar1 = nn::fs::GetFileSize(local_28,local_48);
      uVar2 = local_28[0];
      if ((iVar1 == 0) && (-1 < (int)local_28[0])) {
        if ((local_28[0] != 0) && (local_28[0] = 0, *DAT_05730eb0 != 0)) {
          local_28[0] = 0;
          __n = (ulong)uVar2;
          __s = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))((long *)*DAT_05730eb0,__n,8);
          if (__s != (void *)0x0) {
            memset(__s,0,__n);
            iVar1 = nn::fs::ReadFile(local_48,0,__s,__n);
            if (iVar1 == 0) {
              nn::fs::CloseFile(local_48);
              *param_2 = __s;
              return uVar2;
            }
            local_28[0] = 0;
            if (*DAT_05730eb0 != 0) {
              local_28[0] = 0;
              (**(code **)(*(long *)*DAT_05730eb0 + 0x38))((long *)*DAT_05730eb0,__s);
            }
            nn::fs::CloseFile(local_48);
            return 0xffff80ca;
          }
        }
        nn::fs::CloseFile(local_48);
        uVar2 = 0xffff812c;
      }
      else {
        nn::fs::CloseFile(local_48);
        uVar2 = 0xffff80c9;
      }
    }
    else {
      uVar2 = 0xffff80c8;
    }
  }
  return uVar2;
}

