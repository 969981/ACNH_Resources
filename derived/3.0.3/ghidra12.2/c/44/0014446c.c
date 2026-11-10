
int FUN_0014446c(undefined8 param_1,char *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  char *__dest;
  char *__haystack;
  size_t sVar6;
  char *__haystack_00;
  void *pvVar7;
  void *local_68;
  size_t local_48;
  
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x5a;
    if ((param_3 != 0) && (param_4 != 0)) {
      iVar2 = strncmp(param_2,"sha256//",8);
      puVar1 = PTR_PTR_04bcb710;
      if (iVar2 == 0) {
        if (*(long *)(*(long *)PTR_PTR_04bcb710 + 0xb8) == 0) {
          iVar3 = 0x5a;
        }
        else {
          lVar4 = FUN_001432f0(0x20);
          if (lVar4 != 0) {
            iVar3 = (**(code **)(*(long *)puVar1 + 0xb8))(param_3,param_4,lVar4,0x20);
            if (iVar3 != 0) {
              return iVar3;
            }
            local_48 = 0;
            local_68 = (void *)0x0;
            iVar3 = FUN_00155d24(param_1,lVar4,0x20,&local_68,&local_48);
            FUN_00143300(lVar4);
            if (iVar3 != 0) {
              return iVar3;
            }
            FUN_0014d430(param_1,"\t public key hash: sha256//%s\n",local_68);
            sVar5 = strlen(param_2);
            __dest = (char *)FUN_001432f0(sVar5 + 1);
            if (__dest != (char *)0x0) {
              memcpy(__dest,param_2,sVar5 + 1);
              __haystack_00 = __dest;
              do {
                __haystack = strstr(__haystack_00,";sha256//");
                sVar5 = local_48;
                if (__haystack == (char *)0x0) {
                  sVar6 = strlen(__haystack_00 + 8);
                  if (sVar5 != sVar6) break;
LAB_001445e0:
                  pvVar7 = local_68;
                  iVar3 = memcmp(local_68,__haystack_00 + 8,sVar5);
                  if ((__haystack == (char *)0x0) || (iVar3 == 0)) {
                    iVar2 = 0;
                    if (iVar3 != 0) {
                      iVar2 = 0x5a;
                    }
                    goto LAB_00144668;
                  }
                }
                else {
                  *__haystack = '\0';
                  sVar6 = strlen(__haystack_00 + 8);
                  if (sVar5 == sVar6) goto LAB_001445e0;
                }
                *__haystack = ';';
                __haystack_00 = strstr(__haystack,"sha256//");
              } while (__haystack_00 != (char *)0x0);
              iVar2 = 0x5a;
              pvVar7 = local_68;
LAB_00144668:
              FUN_00143300(pvVar7);
              local_68 = (void *)0x0;
              FUN_00143300(__dest);
              return iVar2;
            }
            FUN_00143300(local_68);
          }
          iVar3 = 0x1b;
        }
      }
    }
  }
  return iVar3;
}

